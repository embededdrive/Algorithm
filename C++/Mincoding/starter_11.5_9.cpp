#include <iostream>

using namespace std;

int main()
{
	int arr1[2][3], arr2[6], num = 0;

	for (int i = 1; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			cin >> arr1[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr2[num++] = arr1[i][j];
		}
	}

	num = arr2[0];
	arr2[0] = arr2[5];
	arr2[5] = num;

	for (int i = 0; i < 6; i++)
	{
		cout << arr2[i] << ' ';
	}

	return 0;
}