#include <iostream>

using namespace std;

int main()
{
	int map[4][4] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		char ch;
		int num;

		cin >> ch >> num;

		for (int i = 0; i < 4; i++)
		{
			if (ch == 'G')
			{
				map[num][i] = 1;
			}
			else if (ch == 'S')
			{
				map[i][num] = 1;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << map[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}