#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[] = { 4, 4, 5, 7, 8, 10, 20, 22, 23, 24 };
	int target;
	
	sort(arr + 0, arr + 10);

	cin >> target;

	int left = 0;
	int right = 9;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == target)
		{
			cout << "O";
			return 0;
		}
		else if (arr[mid] < target)
		{
			left = mid + 1;
		}
		else if (arr[mid] > target)
		{
			right = mid - 1;
		}
	}

	cout << 'X';

	return 0;
}