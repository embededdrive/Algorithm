#include <iostream>

using namespace std;

int main()
{
	int MAP[3][4] = {
		65000, 35, 42, 70,
		70, 35, 65000, 1300,
		65000, 30000, 38, 42
	}, id[65535 + 1] = { 0 }, maxx, maxy, max;

	max = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			id[MAP[i][j]]++;
			if (max < MAP[i][j])
			{
				max = MAP[i][j];
				maxx = i;
				maxy = j;
			}
		}
	}

	cout << MAP[maxx][maxy];

	return 0;
}