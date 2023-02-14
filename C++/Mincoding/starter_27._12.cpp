#include <iostream>

using namespace std;

int main()
{
	int arr[5][4];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 4; i >= 0; i--)
	{
		while (arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3] == 4)
		{
			for (int j = i; j > 0; j--)
			{
				arr[j][0] = arr[j - 1][0];
				arr[j][1] = arr[j - 1][1];
				arr[j][2] = arr[j - 1][2];
				arr[j][3] = arr[j - 1][3];
			}
			for (int j = 0; j < 4; j++)
			{
				arr[0][j] = 0;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}