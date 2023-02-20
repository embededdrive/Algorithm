#include <iostream>

using namespace std;

int main()
{
	int cost, cnt = 0;
	int coins[4] = { 500, 100, 50, 10 };

	cin >> cost;

	for (int i = 0; i < 4; i++)
	{
		cnt += cost / coins[i];
		cost = cost % coins[i];
	}

	cout << cnt;

	return 0;
}