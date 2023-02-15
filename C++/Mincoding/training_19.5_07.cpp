#include <iostream>

using namespace std;

int map[3][3] = {
	3, 5, 1,
	3, 8, 1,
	1, 1, 5
}, bitarray[2][2];

int getSum(int x, int y)
{
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum += map[i + x][j + y] * bitarray[i][j];
		}
	}

	return sum;
}

int main()
{
	int max = 0, maxX, maxY;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> bitarray[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int ret = getSum(i, j);
			if (ret > max)
			{
				max = ret;
				maxX = i;
				maxY = j;
			}
		}
	}

	cout << '(' << maxX << ',' << maxY << ')';

	return 0;
}