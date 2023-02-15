#include <iostream>

using namespace std;

int main()
{
	int map[4][4];
	int maxNum = 0, maxIdx;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += map[i][j];
		}

		if (maxNum < sum)
		{
			maxNum = sum;
			maxIdx = i;
		}
	}

	cout << (char)('A' + maxIdx);

	return 0;
}