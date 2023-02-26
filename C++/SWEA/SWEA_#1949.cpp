#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Coord {
	int y, x;

	bool operator==(Coord compare) {
		return y == compare.y && x == compare.x;
	}
};

int mapSize, destructSize;
int topHeight;
int map[8][8];
int visited[8][8];

int dY[4] = { -1, 1, 0, 0 };
int dX[4] = { 0, 0, -1, 1 };

// 거리 / 현재좌표 / 
int dp(Coord now, bool destructed) {
	bool noPath = true;
	int nowHeight = map[now.y][now.x];
	vector<Coord> destructingPath, normalPath;
	for (int i = 0; i < 4; i++)
	{
		int nY = now.y + dY[i];
		int nX = now.x + dX[i];

		if (nY < 0 || nX < 0 || nY >= mapSize || nX >= mapSize)
			continue;

		if (visited[nY][nX])
			continue;

		if (destructed)
		{
			if (map[nY][nX] >= nowHeight)
				continue;
			else
			{
				noPath = false;
				normalPath.push_back({ nY, nX });
			}
		}
		else {
			if (map[nY][nX] >= nowHeight)
			{
				if (map[nY][nX] - destructSize >= nowHeight)
					continue;
				else
				{
					noPath = false;
					destructingPath.push_back({ nY, nX });
				}
			}
			else
			{
				noPath = false;
				normalPath.push_back({ nY, nX });
			}
		}
	}

	if (noPath)
		return 1;

	int maxPath = 0;

	int nPathSize = normalPath.size();

	for (int i = 0; i < nPathSize; i++)
	{
		visited[normalPath[i].y][normalPath[i].x] = 1;

		int ret = dp(normalPath[i], destructed);
		if (ret > maxPath)
			maxPath = ret;

		visited[normalPath[i].y][normalPath[i].x] = 0;
	}

	int dPathSize = destructingPath.size();

	for (int i = 0; i < dPathSize; i++)
	{
		int temp = map[destructingPath[i].y][destructingPath[i].x];
		map[destructingPath[i].y][destructingPath[i].x] = nowHeight - 1;
		visited[destructingPath[i].y][destructingPath[i].x] = 1;


		int ret = dp(destructingPath[i], true);
		if (ret > maxPath)
			maxPath = ret;

		visited[destructingPath[i].y][destructingPath[i].x] = 0;
		map[destructingPath[i].y][destructingPath[i].x] = temp;
	}

	return maxPath + 1;
}

int main()
{
	// freopen("input.txt", "r", stdin);

	int tc;

	cin >> tc;

	for (int testNo = 1; testNo <= tc; testNo++)
	{
		cin >> mapSize >> destructSize;

		topHeight = 0;

		vector<Coord> startFrom;

		for (int i = 0; i < mapSize; i++)
		{
			for (int j = 0; j < mapSize; j++)
			{
				cin >> map[i][j];

				if (map[i][j] > topHeight)
				{
					topHeight = map[i][j];

					startFrom.clear();
					startFrom.push_back({ i, j });
				}
				else if (map[i][j] == topHeight)
					startFrom.push_back({ i, j });
			}
		}

		int startSize = startFrom.size();
		int maxLength = 0;

		for (int i = 0; i < startSize; i++)
		{
			visited[startFrom[i].y][startFrom[i].x] = 1;

			int ret = dp(startFrom[i], false);

			visited[startFrom[i].y][startFrom[i].x] = 0;

			if (ret > maxLength)
			{
				maxLength = ret;
			}
		}

		cout << '#' << testNo << ' ' << maxLength << '\n';
	}

	return 0;
}


/*

등산로 만들기

가장 높은 봉우리 최대 5개

공사 K 1~5
맵 크기 N 3~8
지형 높이 1~20

산을 깎을 수 있으므로 최대 높이는 고정

1. 최대높이에서 DP 진행

2. direct 4방향 + 공사여부

[K][8][8]
공사여부 / 맵 / 맵 얼마나 더 갈수 있는지

*/