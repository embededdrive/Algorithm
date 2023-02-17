#include <iostream>
#include <queue>

using namespace std;

struct Coord {
	int y, x;
	int dist;
};

char pic[8][10];
int visited[8][9];

queue<Coord> one;

void findOne(int y, int x)
{
	int dY[4] = { -1, 1, 0, 0 };
	int dX[4] = { 0, 0, -1, 1 };

	queue<Coord> q;

	q.push({ y, x, 0 });
	visited[y][x] = 1;

	while (!q.empty())
	{
		Coord now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nY = now.y + dY[i];
			int nX = now.x + dX[i];

			if (nY < 0 || nX < 0 || nY >= 8 || nX >= 9)
				continue;

			if (pic[nY][nX] == '_')
				continue;

			if (visited[nY][nX])
				continue;

			visited[nY][nX] = 1;

			q.push({ nY, nX, 0 });
			one.push({ nY, nX, 0 });
		}
	}
}

int findAnother(int y, int x) {
	int dY[4] = { -1, 1, 0, 0 };
	int dX[4] = { 0, 0, -1, 1 };
	int used[8][9] = { 0 };

	queue<Coord> q;
	q.push({ y, x, 0 });
	used[y][x] = 1;


	while (!q.empty())
	{
		Coord now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nY = now.y + dY[i];
			int nX = now.x + dX[i];

			if (nY < 0 || nX < 0 || nY >= 8 || nX >= 9)
				continue;

			if (visited[nY][nX])
				continue;

			if (used[nY][nX])
				continue;

			used[nY][nX] = 1;
			q.push({ nY, nX, now.dist + 1 });

			if (pic[nY][nX] == '#')
				return now.dist;
		}
	}

	return -1;
}

int main()
{
	bool finded = false;

	for (int i = 0; i < 8; i++)
	{
		cin >> pic[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (pic[i][j] == '_')
				continue;

			one.push({ i, j, 0 });
			findOne(i, j);
			finded = true;
			break;
		}
		if (finded) break;
	}

	int min = 2e+09;

	while (!one.empty())
	{
		Coord now = one.front();
		one.pop();

		int ret = findAnother(now.y, now.x);


		if (ret != -1 && ret < min)
		{
			min = ret;
		}
	}

	cout << min;

	return 0;
}