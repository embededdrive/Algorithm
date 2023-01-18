#include <iostream>

using namespace std;

int main()
{
	int arr[5][4], sum[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum[i] += arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << sum[i] << ' ';
	}

	return 0;
}