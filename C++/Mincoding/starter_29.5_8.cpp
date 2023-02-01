#include <iostream>

using namespace std;

int main()
{
	char map[4][4];
	int dY[4] = { 0, 1, 0, -1 };
	int dX[4] = { 1, 0, -1, 0 };
	int idx;

	for (int i = 0; i < 4; i++)
	{
		cin >> map[i];
	}

	for (int i = 0; i < 5; i++)
	{
		idx = i;
		if (idx == 4) idx = 0;
		for (char ch = 'A'; ch <= 'Z'; ch++)
		{
			int cY, cX;
			bool finded = false;
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					if (map[j][k] == ch) {
						cY = j;
						cX = k;
						finded = true;
						break;
					}
				}
				if (finded)
				{
					break;
				}
			}
			if (!finded) continue;

			int posY = cY + dY[idx];
			int posX = cX + dX[idx];

			if (posY > 3 || posY < 0 || posX > 2 || posY < 0) continue;
			if (map[posY][posX] != '_') continue;

			map[posY][posX] = map[cY][cX];
			map[cY][cX] = '_';
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << map[i][j];
		}
		cout << '\n';
	}

	return 0;
}