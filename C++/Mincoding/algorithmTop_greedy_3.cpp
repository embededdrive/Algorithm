#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, totalCost = 0;
	int setPrices[50];
	int onePrices[50];

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> setPrices[i] >> onePrices[i];
	}

	sort(setPrices, setPrices + m);
	sort(onePrices, onePrices + m);

	while (n > 0)
	{
		int setCnt = n / 6;
		int oneCnt = n % 6;
		int mincost;

		if (setCnt != 0)
		{
			if (setPrices[0] > onePrices[0] * 6)
			{
				mincost = onePrices[0] * 6;
			}
			else {
				mincost = setPrices[0];
			}
			n = n - setCnt * 6;
			totalCost += mincost * setCnt;
		}
		else {
			if (setPrices[0] > onePrices[0] * oneCnt)
			{
				mincost = onePrices[0];
				totalCost += mincost * oneCnt;
			}
			else {
				mincost = setPrices[0];
				totalCost += mincost;
			}
			n = n - oneCnt;
		}
	}

	cout << totalCost;

	return 0;
}