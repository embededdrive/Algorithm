#include <iostream>

using namespace std;

int map[5][5] = {
	3, 3, 5, 3, 1,
	2, 2, 4, 2, 6,
	4, 9, 2, 3, 4,
	1, 1, 1, 1, 1,
	3, 3, 5, 9, 2
};

int sum(int x, int y)
{
	int dx[4] = {-1, -1, 1, 1};
	int dy[4] = {-1, 1, -1, 1};
	int num = 0;

	for (int i = 0; i < 4; i++)
	{
		int posx = x + dx[i];
		int posy = y + dy[i];

		if (posx >= 0 && posx < 5 && posy >= 0 && posy < 5)
		{
			num += map[posx][posy];
		}
	}
	return num;
}

int main()
{
	int max = 0, maxx, maxy;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int ret = sum(i, j);
			if (max < ret)
			{
				max = ret;
				maxx = i;
				maxy = j;
			}
		}
	}

	cout << maxx << ' ' << maxy;

	return 0;
}