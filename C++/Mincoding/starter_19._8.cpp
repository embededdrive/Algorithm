#include <iostream>

using namespace std;

int image[4][4];

int rectSum(int x, int y)
{
	int dx[5] = { 0, 0, 1, 1, 1 };
	int dy[5] = { 1, 2, 0, 1, 2 };
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		int posx = x + dx[i];
		int posy = y + dy[i];

		if (posx >= 0 && posx < 4 && posy >= 0 && posy < 4)
		{
			sum += image[posx][posy];
		}
	}

	return sum;
}

int main()
{
	int max = 0, maxx, maxy;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> image[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int ret = rectSum(i, j);
			if (max < ret)
			{
				max = ret;
				maxx = i;
				maxy = j;
			}
		}
	}

	cout << '(' << maxx << ',' << maxy << ')';

	return 0;
}