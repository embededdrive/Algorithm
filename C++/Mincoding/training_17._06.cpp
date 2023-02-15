#include <iostream>

using namespace std;

int main()
{
	int mask1[4][4] = {
		0, 0, 0, 1,
		1, 1, 0, 1,
		1, 0, 0, 1,
		1, 1, 1, 1
	}, mask2[4][4] = {
		1, 1, 1, 1,
		1, 0, 1, 1,
		1, 0, 0, 0,
		1, 0, 0, 0
	}, mat[4][4] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (mask1[i][j] || mask2[i][j])
			{
				mat[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (mat[i][j] == 0)
			{
				cout << '(' << i << ',' << j << ")\n";
			}
		}
	}

	return 0;
}