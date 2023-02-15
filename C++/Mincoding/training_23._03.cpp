#include <iostream>

using namespace std;

char path[4];
int n, cnt;

void run(int lev)
{
	if (lev == n)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		if (lev > 1)
		{
			if ('A' + i == path[lev - 1] && 'A' + i == path[lev - 2])
			{
				continue;
			}
		}

		path[lev] = 'A' + i;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main()
{
	cin >> n;

	run(0);

	cout << cnt;

	return 0;
}