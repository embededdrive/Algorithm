#include <iostream>

using namespace std;

int main()
{
	char sen[2][6], arr[12];
	int len[2];

	cin >> sen[0] >> sen[1];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (sen[i][j] == '\0')
			{
				len[i] = j;
				break;
			}
		}
	}

	for (int i = 0; i < len[0]; i++)
	{
		arr[i] = sen[0][i];
	}
	for (int i = 0; i < len[1]; i++)
	{
		arr[i + len[0]] = sen[1][i];
	}

	for (int i = 0; i < len[0] + len[1]; i++)
	{
		cout << arr[i];
	}

	return 0;
}