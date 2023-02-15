#include <iostream>

using namespace std;

char name[6] = { "BTSKR" };
int used[6], cnt, n;

void run(int lev)
{
	if (lev == n)
	{
		if (used[2] == 0) return;
		cnt++;
		return;
	}

	for (int i = 0; i < 5; i++)
	{
		if (used[i]) continue;

		used[i] = 1;
		run(lev + 1);
		used[i] = 0;
	}
}

int main()
{
	cin >> n;

	run(0);

	cout << cnt;

	return 0;
}