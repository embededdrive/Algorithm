#include<iostream>
#include<queue>

using namespace std;

struct Coord {
	int y, x;
};

int map[4][9];
int visited[4][9];

int bfs(int y, int x)
{
	int num = map[y][x];
	int dY[4] = { -1, 1, 0, 0 };
	int dX[4] = { 0, 0, -1, 1 };

	queue<Coord> q;

	q.push({ y, x });
	visited[y][x] = 1;

	int size = 0;

	while (!q.empty())
	{
		Coord now = q.front();
		q.pop();

		size++;

		for (int i = 0; i < 4; i++)
		{
			int nY = now.y + dY[i];
			int nX = now.x + dX[i];

			if (nY < 0 || nX < 0 || nY >= 4 || nX >= 9)
				continue;

			if (map[nY][nX] != num)
				continue;

			if (visited[nY][nX])
				continue;

			q.push({ nY, nX });
			visited[nY][nX] = 1;
		}
	}

	return size;
}

int main()
{
	int max = 0, maxNum;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (visited[i][j])
				continue;

			int ret = bfs(i, j);
			if (ret > max)
			{
				max = ret;
				maxNum = map[i][j];
			}
		}
	}

	cout << max * maxNum;

	return 0;
}