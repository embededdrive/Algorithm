#include <iostream>

using namespace std;

int n, nums[5], used[5];
int path[3], minNumber = 1000;

void run(int lev)
{
	if (lev == 3)
	{
		int ret = path[0] * 100 + path[1] * 10 + path[2];
		if (ret >= 100 && ret < minNumber)
			minNumber = ret;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (used[i]) continue;
		used[i] = 1;
		path[lev] = nums[i];
		run(lev + 1);
		path[lev] = 0;
		used[i] = 0;
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	run(0);

	cout << minNumber;

	return 0;
}