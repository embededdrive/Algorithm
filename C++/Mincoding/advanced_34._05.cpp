#include <iostream>

using namespace std;

int main()
{
	int n;
	int root;

	cin >> n;

	int left = 1;
	int right = n;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (mid * mid <= n)
		{
			left = mid + 1;
			root = mid;
		}
		else {
			right = mid - 1;
		}
	}

	cout << root;

	return 0;
}