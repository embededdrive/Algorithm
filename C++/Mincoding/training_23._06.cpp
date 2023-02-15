#include <iostream>

using namespace std;

char cards[6], path[5];
int cnt;

void run(int lev)
{
	if (lev == 4)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < 5; i++)
	{
		if (lev > 0)
		{
			if (abs(path[lev - 1] - cards[i]) > 3)
			{
				continue;
			}
		}

		path[lev] = cards[i];
		run(lev + 1);
		path[lev] = 0;
	}
}

int main()
{
	cin >> cards;

	run(0);

	cout << cnt;

	return 0;
}