#include <iostream>

using namespace std;

int main()
{
	int arr[3][2][2] = { {
			2, 4,
			1, 5
	},{
		2, 3,
		3, 6
	},{
		7, 3,
		1, 5
	} }, num, max = 0, min = 99;

	cin >> num;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (arr[num][i][j] > max)
			{
				max = arr[num][i][j];
			}
			if (arr[num][i][j] < min)
			{
				min = arr[num][i][j];
			}
		}
	}
	cout << "MAX=" << max << '\n';
	cout << "MIN=" << min;

	return 0;
}