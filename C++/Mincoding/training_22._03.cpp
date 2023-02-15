#include <iostream>

using namespace std;

char arr[5] = { "BGTK" };
int level;
char PATH[5];

void run(int lev)
{
	if (lev == level)
	{
		cout << PATH << '\n';
		return;
	}

	for (int i = 0; i < 4; i++)
	{

		PATH[lev] = arr[i];
		run(lev + 1);
	}
}

int main()
{
	cin >> level;

	run(0);

	return 0;
}