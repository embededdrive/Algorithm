#include <iostream>
#include <queue>

using namespace std;

struct Axis {
	int y, x;
	int dist;
};

int n, m;
int sDist, dDist;

char map[21][21];

void bfs(int startY, int startX)
{
	int dY[4] = { -1, 1, 0, 0 };
	int dX[4] = { 0, 0, -1, 1 };

	queue<Axis> q;

	q.push({ startY, startX, 0 });

	map[startY][startX] = 'x';

	while (!q.empty())
	{
		Axis now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int posY = now.y + dY[i];
			int posX = now.x + dX[i];

			if (posY < 0 || posX < 0 || posY >= n || posX >= m)
				continue;

			if (map[posY][posX] == 'x')
				continue;

			q.push({ posY, posX, now.dist + 1 });
			if (map[posY][posX] == 'D')
				dDist = now.dist + 1;
			if (map[posY][posX] == 'S')
				sDist = now.dist + 1;
			map[posY][posX] = 'x';
		}
	}
}

int main()
{
	int cY, cX;

	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];

			if (map[i][j] == 'C')
			{
				cY = i;
				cX = j;
			}
		}
	}

	bfs(cY, cX);

	cout << dDist + sDist;

	return 0;
}