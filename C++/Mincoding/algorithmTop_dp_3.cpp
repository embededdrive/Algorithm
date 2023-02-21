#include <iostream>

using namespace std;

int n, coins[10];
int memo[3001];

int exchange(int cost)
{
	if (cost == 0)
		return 0;
	if (cost < 0)
		return 2e07;
	if (memo[cost] != 0)
		return memo[cost];

	int minCnt = 2e07;

	for (int i = 0; i < n; i++)
	{
		int cnt = exchange(cost - coins[i]) + 1;
		if (cnt < minCnt)
			minCnt = cnt;
	}

	memo[cost] = minCnt;

	return minCnt;
}

int main()
{
	int t;

	cin >> t >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> coins[i];
	}

	int ret = exchange(t);

	if (ret >= 2e07)
		cout << "impossible";
	else
		cout << ret;

	return 0;
}