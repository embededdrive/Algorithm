#include <iostream>

using namespace std;

int main()
{
	char gas[11];
	int max;

	cin >> gas;

	int left = 0;
	int right = 9;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (gas[mid] == '#')
		{
			max = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	cout << (max + 1) *10 << '%';

	return 0;
}