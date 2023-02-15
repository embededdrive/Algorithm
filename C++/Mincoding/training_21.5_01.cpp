#include <iostream>
#include<cstring>

using namespace std;

int main()
{
	char map[4][4] = { 0 };
	int ay, ax, by, bx;
	
	for (int i = 0; i < 4; i++)
	{
		cin >> map[i];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (map[i][j] == 'A')
			{
				ay = i;
				ax = j;
			}
			if (map[i][j] == 'B')
			{
				by = i;
				bx = j;
			}
		}
	}
	
	cout << abs(ax - bx) + abs(ay - by);

	return 0;
}