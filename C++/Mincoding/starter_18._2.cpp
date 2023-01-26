#include <iostream>

using namespace std;

int main()
{
	int arr[3][3], dat[10] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			dat[arr[i][j]]++;
		}
	}

	for (int i = 1; i <= 9; i++)
	{
		if (dat[i] == 0)
		{
			cout << i << ' ';
		}
	}

	return 0;
}