#include <iostream>

using namespace std;

int main()
{
	int map[7][7] = {
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 1, 0, 1, 0, 0,
		0 ,1 ,0, 0, 0, 1, 0,
		0, 0, 1, 0, 1, 0, 0,
		0, 0, 0, 1, 0, 1, 0,
		0, 1, 1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0
	}, black[4][2] = {
			2, 2,
			2, 4,
			3, 3,
			4, 2
	}, y, x, cnt = 0;
	int dy[4] = {-1, 0, 1, 0};
	int dx[4] = {0, 1, 0, -1};

	cin >> y >> x;

	map[y][x] = 1;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int posy = black[i][0] + dy[j];
			int posx = black[i][1] + dx[j];

			if (map[posy][posx] != 1)
			{
				break;
			}
			if (j == 3)
			{
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}