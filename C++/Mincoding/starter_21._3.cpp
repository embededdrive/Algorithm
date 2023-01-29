#include <iostream>

using namespace std;

int level, branch;

void run(int lev)
{
	if (lev == level)
	{
		return;
	}

	for (int i = 0; i < branch; i++)
	{
		run(lev + 1);
	}
}

int main()
{
    cin >> level >> branch;

	run(0);

    return 0;
}