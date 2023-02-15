#include <iostream>

using namespace std;

int branch;
char PATH[5];

void run(int lev)
{
	if (lev == 4)
	{
		cout << PATH << '\n';
		return;
	}

	for (int i = 0; i < branch; i++)
	{
		PATH[lev] = '1' + i;
		run(lev + 1);
	}
}

int main()
{
	cin >> branch;

	run(0);

	return 0;
}