#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct Coord {
	int y, x;

	bool operator==(Coord another) {
		return y == another.y && x == another.x;
	}
};

int dY[4] = { 1, 1, -1, -1 };
int dX[4] = { 1, -1, -1, 1 };
int n;

int cafe[20][20];
int visited[20][20];
int desert[101];

Coord startCafe;

int maxCnt;

void dfs(int lev, int start, Coord now)
{
	if (lev != 0 && startCafe == now)
	{
		if (lev > maxCnt)
			maxCnt = lev;

		return;
	}

	int cY = now.y;
	int cX = now.x;

	for (int i = start; i <= start + 1; i++)
	{
		if (i >= 4)
			continue;

		int nY = cY + dY[i];
		int nX = cX + dX[i];

		Coord next = { nY, nX };

		if (nY < 0 || nX < 0 || nY >= n || nX >= n)
			continue;

		if (visited[nY][nX])
			continue;

		if (desert[cafe[nY][nX]])
			continue;

		desert[cafe[nY][nX]] = 1;
		visited[nY][nX] = 1;
		dfs(lev + 1, i, {nY, nX});
		visited[nY][nX] = 0;
		desert[cafe[nY][nX]] = 0;
	}

	return;
}

int main()
{
	// freopen("input.txt", "r", stdin);

	int t;

	cin >> t;

	for (int tc = 1; tc <= t; tc++)
	{
		memset(desert, 0, 101 * sizeof(int));
		int max = 0;

		cin >> n;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> cafe[i][j];


		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				maxCnt = 0;
				startCafe = { i, j };
				dfs(0, 0, { i, j });

				if (maxCnt > max)
					max = maxCnt;
			}
		}

		if (max == 0)
			max = -1;

		cout << '#' << tc << ' ' << max << '\n';
	}

	return 0;
}