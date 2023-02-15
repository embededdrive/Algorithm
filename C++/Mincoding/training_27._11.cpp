#include <iostream>

using namespace std;

int arranged[9];

char arr[4][4] = {'_'};

void makeWall(int cY, int cX)
{
	int dY[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
	int dX[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

	arr[cY][cX] = '#';

	for (int i = 0; i < 8; i++)
	{
		int posY = cY + dY[i];
		int posX = cX + dX[i];

		if (posY < 0 || posX < 0 || posY > 3 || posX > 3) continue;

		if (arr[posY][posX] == '_')
		{
			arr[posY][posX] = '@';
		}
	}
}

int main()
{
	int y, x;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = '_';
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cin >> y >> x;
		makeWall(y, x);
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j];
		}
		cout << '\n';
	}

	return 0;
}