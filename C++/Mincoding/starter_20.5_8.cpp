#include <iostream>

using namespace std;

int main()
{
	int arr[2][4], result[8], idx[2] = { 0 }, resultidx = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 8; i++)
	{
		int a, b, min;

		a = arr[0][idx[0]];
		b = arr[1][idx[1]];

		if (idx[0] == 4 && idx[1] == 4)
		{
			break;
		}
		else if (idx[0] == 4) {
			min = b;
			idx[1]++;
		}
		else if (idx[1] == 4) {
			min = a;
			idx[0]++;
		}
		else {
			if (a <= b)
			{
				min = a;
				idx[0]++;
			}
			else {
				min = b;
				idx[1]++;
			}
		}
		result[resultidx++] = min;
	}

	for (int i = 0; i < 8; i++)
	{
		cout << result[i] << ' ';
	}

	return 0;
}