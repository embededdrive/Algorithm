#include <iostream>

using namespace std;

string names[3];
int path[3];

void run(int lev)
{
	if (lev == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << names[path[i]] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		if (path[lev]) continue;
		path[lev] = i;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> names[i];
	}

	run(0);

    return 0;
}