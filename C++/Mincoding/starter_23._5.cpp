#include <iostream>

using namespace std;

char name[6] = { "EWABC" }, path[5];
int used[6];

void run(int lev)
{
	if (lev == 4)
	{
		cout << path << '\n';
		return;
	}

	for (int i = 0; i < 5; i++)
	{
		if (used[i]) continue;

		used[i] = 1;
		path[lev] = name[i];
		run(lev + 1);
		path[lev] = 0;
		used[i] = 0;
	}
}

int main()
{
	char ex;
	cin >> ex;

	for (int i = 0; i < 5; i++)
	{
		if (name[i] == ex)
		{
			used[i] = 1;
			break;
		}
	}

	run(0);

	return 0;
}