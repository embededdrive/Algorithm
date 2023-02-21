#include <iostream>
#include <algorithm>

using namespace std;

int map[150];
int memo[150];

int score(int idx)
{
	if (idx == 0)
		return 0;
	if (idx < 0)
		return -21e8;
	if (memo[idx] != 0)
		return memo[idx];

	int a = score(idx - 7) + map[idx];
	int b = score(idx - 2) + map[idx];

	memo[idx] = max(a, b);

	return max(a, b);
}

int main()
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> map[i];
	}

	int maxScore = -21e8;
	for (int i = n + 1; i < n + 7; i++)
	{
		int ret = score(i);
		if (ret > maxScore)
			maxScore = ret;
	}

	cout << maxScore;

	return 0;
}