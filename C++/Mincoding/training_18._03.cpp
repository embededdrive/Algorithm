#include <iostream>

using namespace std;

int main()
{
	int arr[3][5] = {
		1, 3, 3, 5, 1,
		3, 6, 2, 4, 2,
		1, 9, 2, 6, 5
	}, N, dat[10] = { 0 };

	cin >> N;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			dat[arr[i][j]]++;
		}
	}

	for (int i = 1; i <= 9; i++)
	{
		if (dat[i] == N)
		{
			cout << i << ' ';
		}
	}

	return 0;
}