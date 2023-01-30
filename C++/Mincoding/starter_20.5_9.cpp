#include <iostream>

using namespace std;

int sizeX, sizeY;
int mat[4][5] = {
	3, 5, 4, 2, 5,
	3, 3, 3, 2, 1,
	3, 2, 6, 7, 8,
	9, 1, 1, 3, 2
};

int getSum(int x, int y)
{
	int sum = 0;
	for (int i = x; i < x + sizeX; i++)
	{
		for (int j = y; j < y + sizeY; j++)
		{
			sum += mat[i][j];
		}
	}
	return sum;
}

int main()
{
	int max = 0, maxX, maxY;

	cin >> sizeX >> sizeY;

	for (int i = 0; i < 4 - (sizeX - 1); i++)
	{
		for (int j = 0; j < 5 - (sizeY - 1); j++)
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