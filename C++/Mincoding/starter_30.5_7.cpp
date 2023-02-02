#include <iostream>

using namespace std;

int path[5], cnt, nums[5];

void run(int lev)
{
	if (lev == 5)
	{
		int sum = 0;
		for (int i = 0; i < 5; i++)
		{
			sum += nums[i] * path[i];
		}
		if (sum >= 10 && sum <= 20)
			cnt++;
		return;
	}

	for (int i = 0; i < 2; i++)
	{
		path[lev] = i;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main()
{
	for (int i = 0; i < 5; i++)
		cin >> nums[i];

	run(0);

	cout << cnt;

    return 0;
}