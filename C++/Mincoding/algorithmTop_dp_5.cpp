#include <iostream>

using namespace std;

int height, width;

int map[1001][1001];
int memo[1001][1001];

int score(int y, int x)
{
	if (y == 0 && x == 0)
		return map[0][0];

	if (y == 0)
		return -21e08;

	if (memo[y][x] != 0)
		return memo[y][x];

	int max = -2e08;
	int dX[3] = { -1, 0, 1 };

	for (int i = 0; i < 3; i++)
	{
		int nX = x + dX[i];

		if (nX < 0 || nX >= width)
			continue;
		if (map[y - 1][nX] == 0)
			continue;

		int ret = score(y - 1, nX);
		if (ret > max)
			max = ret;
	}

	max += map[y][x];
	memo[y][x] = max;

	return max;
}

int main()
{
	cin >> height >> width;

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			cin >> map[i][j];

	int maxScore = 0;

	for (int i = 0; i < width; i++)
	{
		if (map[height - 1][i] == 0)
			continue;
		int ret = score(height - 1, i);
		if (ret > maxScore)
			maxScore = ret;
	}

	cout << maxScore;

	return 0;
}