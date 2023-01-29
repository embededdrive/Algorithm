#include <iostream>

using namespace std;

char name[5], path[5];
int cnt;

void run(int lev)
{
	if (lev == 4)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (lev > 0)
		{
			if (name[i] == 'B' && path[lev - 1] == 'T')
			{
				continue;
			}
			if (name[i] == 'T' && path[lev - 1] == 'B')
			{
				continue;
			}
		}
		path[lev] = name[i];
		run(lev + 1);
		path[lev] = 0;

	}
}

int main()
{
	cin >> name;

	run(0);

	cout << cnt;

	return 0;
}