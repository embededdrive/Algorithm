#include <iostream>

using namespace std;

int main()
{
	char mat[3][11];
	bool hasch = false;

	for (int i = 0; i < 3; i++)
	{
		cin >> mat[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (mat[i][j] == '\0')
			{
				break;
			}
			if (mat[i][j] == 'M')
			{
				hasch = true;
			}

		}
		if (hasch) break;
	}

	if (hasch)
	{
		cout << "M이 존재합니다";
	}
	else {
		cout << "M이 존재하지 않습니다";
	}

	return 0;
}