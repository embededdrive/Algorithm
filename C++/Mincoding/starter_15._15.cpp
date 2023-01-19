#include <iostream>

using namespace std;

int main()
{
	char arr[2][8];
	int cnt = 0, len[2], max;

	cin >> arr[0] >> arr[1];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[i][j] == '\0')
			{
				len[i] = j;
				break;
			}
		}
	}

	if (len[0] > len[1])
	{
		max = len[0];
	}
	else {
		max = len[1];
	}

	for (int i = 0; i < max; i++)
	{
		if (arr[0][i] != arr[1][i])
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}