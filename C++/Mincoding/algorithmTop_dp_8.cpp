#include <iostream>

using namespace std;

int n, q;
int weights[20];
int used[20];

int makeWeight(int target) {

	if (target == 0)
		return 1;

	if (target < 0)
		return -1;

	int possible = 0;

	for (int i = 0; i < n; i++)
	{
		if (used[i])
			continue;

		used[i] = 1;
		int ret = makeWeight(target - weights[i]);
		if (ret == 1)
		{
			used[i] = 0;
			possible = 1;
			break;
		}

		ret = makeWeight(target + weights[i]);
		if (ret == 1)
		{
			used[i] = 0;
			possible = 1;
			break;
		}
		used[i] = 0;
	}

	return possible;
}

int main()
{
	int cnt = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> weights[i];

	cin >> q;

	for (int i = 0; i < q; i++)
	{
		int measure;

		cin >> measure;

		cnt += makeWeight(measure);
	}

	cout << cnt;

	return 0;
}