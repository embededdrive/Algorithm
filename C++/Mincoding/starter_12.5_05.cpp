#include <iostream>

using namespace std;

int main()
{
	int arr[5][5] = {
		4, 5, 4, 5, 4,
		8, 9, 8, 9, 8,
		1, 2, 1, 2, 1,
		4, 5, 4, 5, 4,
		6, 7, 6, 7, 6
	};

	for (int i = 0; i < 5; i++)
	{
		int y, x;
		cin >> y >> x;
		arr[y][x]++;
		if (arr[y][x] == 10)
		{
			arr[y][x] = 0;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}