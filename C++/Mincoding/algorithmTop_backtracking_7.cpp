#include <iostream>

using namespace std;

int n;
int num[10], path[10];
char oper[4] = { "*+-" };

void run(int lev)
{
	if (lev == n - 1)
	{

		int ans = num[0];
		for (int i = 1; i < n; i++)
		{
			if (path[i - 1] == 0) ans *= num[i];
			else if (path[i - 1] == 1) ans += num[i];
			else ans -= num[i];
		}
		if (ans % 101 == 0 && ans != 0)
		{
			for (int i = 0; i < n - 1; i++)
			{
				cout << num[i] << oper[path[i]];
			}
			cout << num[n - 1] << '\n';
		}

		return;
	}

	for (int i = 0; i < 3; i++)
	{
		path[lev] = i;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main()
{
    cin >> n;

	for (int i = 0; i < n; i++)
		cin >> num[i];

	run(0);

    return 0;
}