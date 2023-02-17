#include <iostream>
#include <queue>

using namespace std;

struct Coord {
	int y, x;
	int dist;
};

int y, x, cY, cX;
char map[10][11];

int bfs(char target)
{
	int dY[4] = { -1, 1, 0, 0 };
	int dX[4] = { 0, 0, -1, 1 };
	int visited[10][10] = { 0 };

	queue<Coord> q;
	q.push({ cY, cX, 0 });
	visited[cY][cX] = 1;

	while (!q.empty())
	{
		Coord now = q.front();
		q.pop();

		if (map[now.y][now.x] == target)
		{
			cY = now.y;
			cX = now.x;
			return now.dist;
		}


		for (int i = 0; i < 4; i++)
		{
			int nY = now.y + dY[i];
			int nX = now.x + dX[i];

			if (nY < 0 || nX < 0 || nY >= y || nX >= x)
				continue;

			if (visited[nY][nX])
				continue;

			if (map[nY][nX] == '#')
				continue;

			visited[nY][nX] = 1;
			q.push({ nY, nX, now.dist + 1 });
		}
	}
	return -1;
}

int delivery() {
	int moveCnt = 0;

	moveCnt += bfs('1');
	moveCnt += bfs('2');
	moveCnt += bfs('3');
	moveCnt += bfs('4');

	return moveCnt;
}

int main()
{
	cin >> y >> x;

	for (int i = 0; i < y; i++)
	{
		cin >> map[i];
	}

	cout << delivery() << "회";

	return 0;
}