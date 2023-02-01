#include <iostream>

using namespace std;

int main()
{
	int arr[2][4], result[8] = { 0 };
	int idx1 = 0, idx2 = 0, idx = 0;

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

		if (idx1 == 4) result[idx++] = arr[1][idx2++];
		else if (idx2 == 4) result[idx++] = arr[0][idx1++];
		else if (arr[0][idx1] > arr[1][idx2]) result[idx++] = arr[1][idx2++];
		else result[idx++] = arr[0][idx1++];
	}

	for (int i = 0; i < 8; i++)
	{
		cout << result[i] << ' ';
	}

	return 0;
}