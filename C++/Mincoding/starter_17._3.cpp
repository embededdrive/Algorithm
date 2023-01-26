#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] = {
		3, 5, 9,
		4, 2, 1,
		1, 1, 5
	}, bitarr[3][3], sum=0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> bitarr[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j] * bitarr[i][j];
		}
	}

	cout << sum;

	return 0;
}