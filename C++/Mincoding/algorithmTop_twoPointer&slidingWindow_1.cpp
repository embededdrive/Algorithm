#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;
	
	for (int i = 1; i <= t; i++)
	{
		int n, w;
		int score[100000], sum = 0;
		int startIdx, endIdx;

		cin >> n >> w;

		for (int j = 0; j < n; j++)
			cin >> score[j];

		for (int j = 0; j < w; j++)
			sum += score[j];

		int maxSum = -1e9;
		for (int j = 0; j < n - w; j++)
		{
			if (maxSum < sum)
			{
				maxSum = sum;
				startIdx = j;
				endIdx = j + w - 1;
			}

			sum -= score[j];
			sum += score[j + w];
		}

		if (maxSum < sum)
		{
			maxSum = sum;
			startIdx = n - w - 1;
			endIdx = n - 1;
		}

		cout << '#' << i << ' ' << startIdx << ' ' << endIdx << ' ' << maxSum << '\n';
	}

	return 0;
}