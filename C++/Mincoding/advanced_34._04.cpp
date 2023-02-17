#include <iostream>

using namespace std;

string datas[1000];
int n;

int bs(int axis, int dir)
{
	int left = 0;
	int right = n;

	int idx = -1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (dir == 0)
		{
			if (datas[mid][axis] == '#')
			{
				left = mid + 1;
				idx = mid;
			}
			else {
				right = mid - 1;
			}
		}
		else {
			if (datas[axis][mid] == '#')
			{
				left = mid + 1;
				idx = mid;
			}
			else {
				right = mid - 1;
			}
		}

	}

	return idx;
}

int findData(int dir)
{
	int min = 2e+09;
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		if (dir == 0)
		{
			int ret = bs(i, 0);
			if (ret > max && ret != -1)
			{
				max = ret;
			}
		}
		else {
			int ret = bs(i, 1);
			if (ret < min && ret != -1)
			{
				min = ret;
			}
		}
	}

	if (dir == 0)
		return max;
	else
		return min;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> datas[i];
	}

	int y, x;

	y = findData(0);
	x = findData(1);

	cout << y << ' ' << x;

	return 0;
}