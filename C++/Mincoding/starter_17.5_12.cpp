#include <iostream>

using namespace std;

int main()
{
	char mat[5][6] = {
		"ABCDE",
		"FGHIJ",
		"KLMNO",
		"PQRST",
		"UVWXY"
	}, ch;
	int x, y;
	bool isExist = false;

	cin >> ch;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (mat[i][j] == ch)
			{
				x = i;
				y = j;
				isExist = true;
				break;
			}
		}
		if (isExist)
		{
			break;
		}
	}

	cout << x - 2 << ',' << y - 2;

	return 0;
}