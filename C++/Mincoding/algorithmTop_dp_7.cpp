#include <iostream>
#include <algorithm>

using namespace std;

int n;
int scores[1001];

int memoOne[1001];
int memoTwo[1001];

int getScore(int pos, bool canOne)
{
	if (pos == 0)
		return 0;

	if (pos < 0)
		return -2e08;

	if (canOne && memoOne[pos] != 0)
		return memoOne[pos];

	if (!canOne && memoTwo[pos] != 0)
		return memoTwo[pos];

	int oneAcc, twoAcc, maxAcc;

	oneAcc = getScore(pos - 1, false) + scores[pos];
	twoAcc = getScore(pos - 2, true) + scores[pos];

	if (canOne)
	{
		maxAcc = max(oneAcc, twoAcc);
		memoOne[pos] = maxAcc;
	}
	else
	{
		maxAcc = twoAcc;
		memoTwo[pos] = maxAcc;
	}

	return maxAcc;
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> scores[i];
	}

	cout << getScore(n + 1, true);

	return 0;
}