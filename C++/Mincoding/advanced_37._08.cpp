#include<iostream>
#include<queue>

using namespace std;

struct Coord
{
	int y, x;
};

int map[101][101];
int visited[101][101];
int n, m;

void bfs(int y, int x)
{
	queue<Coord> q;

	int dY[4] = { -1, 1, 0, 0 };
	int dX[4] = { 0, 0, -1, 1 };

	q.push({ y, x });

	while (!q.empty())
	{
		Coord now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nY = now.y + dY[i];
			int nX = now.x + dX[i];

			if (nY < 0 || nX < 0 || nY >= n || nX >= m)
				continue;
			if (map[nY][nX] == 0)
				continue;
			if (visited[nY][nX])
				continue;

			visited[nY][nX] = 1;
			q.push({ nY, nX });
		}
	}
}

int main()
{
	int cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 0)
				continue;
			if (visited[i][j])
				continue;

			visited[i][j] = 1;
			bfs(i, j);
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}