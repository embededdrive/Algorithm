#include <iostream>

using namespace std;

int level;
char PATH[11], name[2] = { 'x', 'o' };

void run(int lev)
{
	if (lev == level)
	{
		cout << PATH << '\n';
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		PATH[lev] = name[i];
		run(lev + 1);
	}
}

int main()
{
	cin >> level;

	run(0);

	return 0;
}