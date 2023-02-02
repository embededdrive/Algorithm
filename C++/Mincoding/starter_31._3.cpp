#include <iostream>

using namespace std;

void rotate(int arr[3][3])
{
	int temp[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			temp[j][i] = arr[i][2-j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = temp[i][j];
		}
	}
}

bool checkSame(int a[3][3], int b[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] != b[i][j])
				return false;
		}
	}
	return true;
}

int main()
{
	int ab[2][3][3], cnt = 0;
	bool isSame = false;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cin >> ab[i][j][k];
			}
		}
	}

	isSame = checkSame(ab[0], ab[1]);

	while (!isSame)
	{
		rotate(ab[0]);
		cnt++;
		isSame = checkSame(ab[0], ab[1]);
	}

	cout << cnt;

	return 0;
}