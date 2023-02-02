#include <iostream>

using namespace std;

int main()
{
	int n, nums[5];
	int x[3], idx;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (nums[i] > nums[j])
			{
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (nums[i] != 0)
		{
			x[0] = nums[i];
			idx = i;
			break;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (i != idx)
		{
			x[1] = nums[i];
			if (i + 1 != idx && i + 1 < n)
			{
				x[2] = nums[i + 1];
			}
			else
				x[2] = nums[i + 2];

			break;
		}
	}

	cout << x[0] * 100 + x[1] * 10 + x[2];

	return 0;
}