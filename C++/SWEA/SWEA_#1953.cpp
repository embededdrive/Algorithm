#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

struct Coord {
	int y, x;
};

int map[50][50];
int visited[50][50];
int height, width;

int bfs(int fromY, int fromX, int timer)
{
	queue<Coord> q;

	int cnt = 0;

	q.push({ fromY, fromX });
	visited[fromY][fromX] = 1;

	while (timer > 0)
	{
		int qSize = q.size();
		timer--;

		for (int i = 0; i < qSize; i++)
		{
			Coord now = q.front();
			q.pop();
			cnt++;

			queue<int> dir;

			if (map[now.y][now.x] == 1)
			{
				dir.push(1);
				dir.push(2);
				dir.push(3);
				dir.push(4);
			}
			else if (map[now.y][now.x] == 2)
			{
				dir.push(1);
				dir.push(2);
			}
			else if (map[now.y][now.x] == 3)
			{
				dir.push(3);
				dir.push(4);
			}
			else if (map[now.y][now.x] == 4)
			{
				dir.push(1);
				dir.push(4);
			}
			else if (map[now.y][now.x] == 5)
			{
				dir.push(2);
				dir.push(4);
			}
			else if (map[now.y][now.x] == 6)
			{
				dir.push(2);
				dir.push(3);
			}
			else if (map[now.y][now.x] == 7)
			{
				dir.push(1);
				dir.push(3);
			}

			int tempSize = dir.size();

			while (!dir.empty())
			{
				int next = dir.front();
				dir.pop();

				int nextY;
				int nextX;
				
				if (next == 1)
				{
					nextY = now.y - 1;
					nextX = now.x;
				} else if (next == 2)
				{
					nextY = now.y + 1;
					nextX = now.x;
				}
				else if (next == 3)
				{
					nextY = now.y;
					nextX = now.x - 1;
				}
				else if (next == 4)
				{
					nextY = now.y;
					nextX = now.x + 1;
				}

				if (nextY < 0 || nextX < 0 || nextY >= height || nextX >= width)
					continue;

				if (visited[nextY][nextX])
					continue;

				if (next == 1)
					if (map[nextY][nextX] != 1 && map[nextY][nextX] != 2 && map[nextY][nextX] != 5 && map[nextY][nextX] != 6)
						continue;
				if (next == 2)
					if (map[nextY][nextX] != 1 && map[nextY][nextX] != 2 && map[nextY][nextX] != 4 && map[nextY][nextX] != 7)
						continue;
				if (next == 3)
					if (map[nextY][nextX] != 1 && map[nextY][nextX] != 3 && map[nextY][nextX] != 4 && map[nextY][nextX] != 5)
						continue;
				if (next == 4)
					if (map[nextY][nextX] != 1 && map[nextY][nextX] != 3 && map[nextY][nextX] != 6 && map[nextY][nextX] != 7)
						continue;

				visited[nextY][nextX] = 1;
				q.push({ nextY, nextX });
			}
		}
	}
	
	return cnt;
}

int main()
{
	freopen("input.txt", "r", stdin);

	int tc;

	cin >> tc;

	for (int testNo = 1; testNo <= tc; testNo++)
	{
		memset(visited, 0, 50 * 50 * sizeof(int));
		memset(map, 0, 50 * 50 * sizeof(int));

		int holeY, holeX, timeLeft;

		cin >> height >> width >> holeY >> holeX >> timeLeft;

		for (int i = 0; i < height; i++)
			for (int j = 0; j < width; j++)
				cin >> map[i][j];

		int ret = bfs(holeY, holeX, timeLeft);

		cout << '#' << testNo << ' ' << ret << '\n';
	}

	return 0;
}