#include <iostream>

using namespace std;

int dat[100001];
int remains[100001];
int input[100001];

int main()
{
	int n, k, sum = 0, cnt = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < n; i++)
	{
		dat[input[i]]++;
	}

	for (int i = 0; i < 100001; i++)
	{
		if (dat[i] == 0) continue;
		sum = i;
		for (int j = i + 1; j < 100001; j++)
		{
			if (dat[j] == 0) continue;
			sum += j;
			if (k - sum > j)
			{
				remains[k - sum]++;
				sum -= j;
			}
			else {
				break;
			}
		}
	}

	for (int i = 0; i < 100001; i++)
	{
		if (remains[i] != 0 && dat[i] != 0)
		{
			cnt += remains[i];
		}
	}

	cout << cnt;

	return 0;
}