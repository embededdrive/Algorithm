#include <iostream>

using namespace std;

int n;
int period[101];
int pay[101];
int memo[101];

int payMax(int date)
{
	if (date <= 0)
		return 0;
	if (date == 1)
		return pay[1];

	if (memo[date] != 0)
		return memo[date];

	int max = 0;

	for (int i = 1; i < date; i++)
	{
		if (i + period[i] - 1 >= date)
			continue;

		int total = payMax(i);
		if (total > max)
			max = total;
	}

	max += pay[date];

	memo[date] = max;

	return max;
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> period[i] >> pay[i];
	}

	int maxProfit = 0;

	for (int i = 1; i <= n; i++)
	{
		int ret = payMax(i);
		if (maxProfit < ret)
		{
			maxProfit = ret;
		}
	}

	cout << maxProfit;

	return 0;
}