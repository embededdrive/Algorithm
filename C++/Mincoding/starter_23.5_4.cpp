#include <iostream>

using namespace std;

int main()
{
	int mat[3][4] = {
		3, 5, 4, 1,
		1, 1, 2, 3,
		6, 7, 1, 2
	}, arr[4], change[10];

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 10; i++)
	{
		change[i] = i;
	}

	for (int i = 0; i < 3; i++)
	{
		change[arr[i]] = arr[i + 1];
	}
	change[arr[3]] = arr[0];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int num = mat[i][j];
			mat[i][j] = change[num];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}