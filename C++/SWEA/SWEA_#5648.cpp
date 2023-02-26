#include <iostream>
#include <queue>

using namespace std;

struct Coord {
	int y, x;
};

struct Atom {
	int y, x;
	int dir;
	int energy;
	bool isDead;
};

int map[4001][4001];
Atom atoms[1001];
queue<int> deads;
queue<Coord> temp;

int main()
{
	int t;

	int dY[4] = { 1, -1, 0, 0 };
	int dX[4] = { 0, 0, -1, 1 };

	cin >> t;

	for (int tc = 1; tc <= t; tc++)
	{
		int energySum = 0, remains = 0;

		int n;

		// input
		cin >> n;

		remains = n;

		for (int i = 1; i <= n; i++)
		{
			int x, y, d, e;

			cin >> x >> y >> d >> e;

			int aY = y * 2 + 2000;
			int aX = x * 2 + 2000;

			map[aY][aX] = i;
			atoms[i] = { aY, aX, d, e, false };
		}

		//
		while (remains > 0)
		{

			for (int i = 1; i <= n; i++)
			{
				if (atoms[i].isDead)
					continue;

				int cY = atoms[i].y;
				int cX = atoms[i].x;
				int nY = cY + dY[atoms[i].dir];
				int nX = cX + dX[atoms[i].dir];

				atoms[i].y = nY;
				atoms[i].x = nX;

				map[cY][cX] = 0;

				if (nY < 0 || nX < 0 || nY > 4000 || nX > 4000)
				{
					remains--;
					atoms[i].isDead = true;
					continue;
				}

				if (map[nY][nX] == 0)
				{
					map[nY][nX] = i;
				}
				else if (map[nY][nX] == -1) {
					deads.push(i);
				}
				else {
					deads.push(map[nY][nX]);
					deads.push(i);
					temp.push({ nY, nX });
					map[nY][nX] = -1;
				}
			}

			while (!temp.empty())
			{
				Coord tempCoord = temp.front();
				temp.pop();
				int tempY = tempCoord.y;
				int tempX = tempCoord.x;

				map[tempY][tempX] = 0;
			}

			while (!deads.empty())
			{
				int idx = deads.front();
				deads.pop();

				remains--;
				energySum += atoms[idx].energy;
				atoms[idx].isDead = true;
			}
		}

		cout << '#' << tc << ' ' << energySum << '\n';
	}

	return 0;
}