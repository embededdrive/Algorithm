#include <iostream>

using namespace std;

char map[4][5];

void explode(int x, int y) {
	int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	for (int j = 0; j < 8; j++)
	{
		int posx = x + dx[j];
		int posy = y + dy[j];

		if (posx >= 0 && posx < 5 && posy >= 0 && posy < 5)
		{
			map[posx][posy] = '#';
		}
	}
}

int main()
{
	int x[2], y[2];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			map[i][j] = '_';
		}
	}

	for (int i = 0; i < 2; i++)
	{
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < 2; i++)
	{
		explode(x[i], y[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << map[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}