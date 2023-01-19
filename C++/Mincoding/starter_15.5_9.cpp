#include <iostream>

using namespace std;

int main()
{
	int mat[2][3], arr[6], idx = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> mat[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[idx++] = mat[i][j];
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (arr[i] > arr[j])
			{
				idx = arr[i];
				arr[i] = arr[j];
				arr[j] = idx;
			}
		}
	}

	idx = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mat[i][j] = arr[idx++];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mat[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}