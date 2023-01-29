#include <iostream>

using namespace std;

int main()
{
	char input[4][5], mat[4][5] = {
		"ABCD",
		"BBAB",
		"CBAC",
		"BAAA"
	}, maxch;
	int DAT[255] = { 0 }, max = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (input[i][j] == mat[i][j])
			{
				DAT[mat[i][j]]++;
			}
		}
	}

	for (char i = 'A'; i <= 'D'; i++)
	{
		if (DAT[i] > max)
		{
			max = DAT[i];
			maxch = i;
		}
	}

	cout << maxch;

	return 0;
}