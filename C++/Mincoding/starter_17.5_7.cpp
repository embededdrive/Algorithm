#include <iostream>

using namespace std;

int levelTable[4][2] = {
	10, 20,
	30, 60,
	100, 150,
	200, 300
};

int counting(int cal)
{
	int level = 0;
	for (int i = 0; i < 4; i++)
	{
		if (cal >= levelTable[i][0] && cal <= levelTable[i][1])
		{
			level = i;
		}
	}
	return level;
}

int main()
{
	int fruits[6], levels[4] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		cin >> fruits[i];
	}

	for (int i = 0; i < 6; i++)
	{
		levels[counting(fruits[i])]++;
	}

	for (int i = 0; i < 4; i++)
	{
		cout << "lev" << i << ':' << levels[i] << '\n';
	}

	return 0;
}