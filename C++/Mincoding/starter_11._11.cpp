#include <iostream>

using namespace std;

int main()
{
	int arr[4][4] = {
		{1, 3, 6, 2},
		{4, 2, 4, 5},
		{6, 3, 7, 3},
		{1, 5, 4, 6}
	}, num, select[16], index = 0;

	cin >> num;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] > num)
			{
				select[index++] = arr[i][j];
			}
		}
	}

	for (int i = 0; i < index; i++)
	{
		cout << select[i] << ' ';
	}

	return 0;
}

