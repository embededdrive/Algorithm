#include <iostream>

using namespace std;

int main()
{
	char mat[3][5] = {
		"ATKB",
		"CZFD",
		"HGEI"
	}, ch;

	int x, y;

	cin >> ch >> x >> y;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mat[i][j] == ch)
			{
				cout << mat[i + x][j + y];
				break;
			}
		}
	}

	return 0;
}