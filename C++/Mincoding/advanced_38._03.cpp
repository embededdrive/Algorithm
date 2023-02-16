#include<iostream>
#include<queue>

using namespace std;

struct Coord {
	int y, x;
	int dist;
};

char map[7][8];

bool bfs(int y, int x, int range)
{
	int visited[7][7] = { 0 };
	int dY[4] = { -1, 1, 0, 0 };
	int dX[4] = { 0, 0, -1, 1 };

	queue<Coord> q;

	q.push({ y, x, 0 });
	visited[y][x] = 1;

	while (!q.empty())
	{
		Coord now = q.front();
		q.pop();

		if (now.dist != 0 && map[now.y][now.x] == map[y][x])
			return false;

		if (now.dist == range)
			continue;

		for (int i = 0; i < 4; i++)
		{
			int nY = now.y + dY[i];
			int nX = now.x + dX[i];

			if (nY < 0 || nX < 0 || nY >= 7 || nX >= 7)
				continue;

			if (visited[nY][nX])
				continue;

			q.push({ nY, nX, now.dist + 1 });
		}
	}
	return true;
}

int main()
{
	bool isValid = true;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (map[i][j] == '1')
				isValid = bfs(i, j, 2);
			else if (map[i][j] == '2')
				isValid = bfs(i, j, 3);

			if (!isValid) break;
		}
		if (!isValid) break;
	}

	if (isValid) cout << "pass";
	else cout << "fail";

	return 0;
}