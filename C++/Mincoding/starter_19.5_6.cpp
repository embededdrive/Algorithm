#include <iostream>

using namespace std;

char map[3][5] = {
		"ABGK",
		"TTAB",
		"ACCD"
}, pattern[2][3];

bool hasPattern(int x, int y)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (map[x + i][y + j] != pattern[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int cnt = 0;

	for (int i = 0; i < 2; i++)
	{
		cin >> pattern[i];
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (hasPattern(i, j))
			{
				cnt++;
			}
		}
	}

	if (cnt > 0)
	{
		cout << "발견(" << cnt << "개)";
	}
	else {
		cout << "미발견";
	}

	return 0;
}