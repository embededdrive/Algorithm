#include <iostream>

using namespace std;

void getMax(int mat[2][3], int *maxX, int *maxY)
{
	int max = mat[0][0];
	*maxX = 0;
	*maxY = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (max < mat[i][j])
			{
				max = mat[i][j];
				*maxX = i;
				*maxY = j;
			}
		}
	}
}

void getMin(int mat[2][3], int* minX, int* minY)
{
	int min = mat[0][0];
	*minX = 0;
	*minY = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (min > mat[i][j])
			{
				min = mat[i][j];
				*minX = i;
				*minY = j;
			}
		}
	}
}

int main()
{
	int mat[2][3] = { 0 }, maxX, maxY, minX, minY;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> mat[i][j];
		}
	}

	getMax(mat, &maxX, &maxY);
	getMin(mat, &minX, &minY);

	cout << '(' << maxX << ',' << maxY << ')' << '\n';
	cout << '(' << minX << ',' << minY << ')';

	return 0;
}