#include <iostream>
#include <cstring>

using namespace std;

char ch[3][7] = {
	"ABCEFG",
	"HIJKLM",
	"NOPQRS"
};

int state[3][6];

int main()
{
	int dY[5] = { -1, 1, 0, 0, 0 };
	int dX[5] = { 0, 0, -1, 1, 0 };

	char input[11];

	cin >> input;

	int len = strlen(input);

	for (int i = 0; i < len; i++)
	{
		char target = input[i];

		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 6; k++)
			{
				if (ch[j][k] == target)
				{
					for (int l = 0; l < 5; l++)
					{
						int y = j + dY[l];
						int x = k + dX[l];

						if (y < 0 || x < 0 || y >= 3 || x >= 6)
							continue;

						state[y][x]++;
						state[y][x] %= 2;
					}
				}
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (state[i][j])
				cout << '#';
			else
				cout << ch[i][j];
		}
		cout << '\n';
	}

	return 0;
}