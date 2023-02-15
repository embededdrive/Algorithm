#include <iostream>

using namespace std;

int main()
{
	int arr[2][4], result[8] = { 0 };
	int idxs[2] = { 0, 0 }, idx = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	while (idx < 8)
	{
		int num1, num2;

		if (idxs[0] < 4) num1 = arr[0][idxs[0]];
		else num1 = 101;
		if (idxs[1] < 4) num2 = arr[1][idxs[1]];
		else num2 = 101;

		if (num1 < num2)
		{
			result[idx++] = num1;
			idxs[0]++;
		}
		else {
			result[idx++] = num2;
			idxs[1]++;
		}
	}

	for (int i = 0; i < 8; i++)
	{
		cout << result[i] << ' ';
	}

	return 0;
}