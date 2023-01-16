#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] = {
		3, 1, 6,
		7, 8, 4,
		9, 2, 3
	}, a, b, c;

	cin >> a >> b >> c;
	arr[a][b] = c;

	int max = arr[0][0], min = arr[0][0];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}

	cout << max + min;

	return 0;
}