#include <iostream>

using namespace std;

int main()
{
	int arr[8] = { 5, 9, 4, 6, 1, 5, 8, 9 }, idx, target, offset = 0;

	cin >> idx >> target;

	for (int i = idx; i < 8; i++)
	{
		if (arr[i] == target)
		{
			break;
		}
		else {
			offset++;
		}
	}

	cout << offset;

	return 0;
}