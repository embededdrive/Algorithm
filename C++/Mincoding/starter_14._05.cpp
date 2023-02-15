#include <iostream>

using namespace std;

int main()
{
	int arr[3][3], sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			sum += arr[j][i];
		}
	}

	cout << sum;

	return 0;
}