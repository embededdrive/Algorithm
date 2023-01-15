#include <iostream>

using namespace std;

int main()
{
	int arr[12] = {3, 4, 1, 5, 8, 1, 7, 7, 3, 6, 9}, num;
	cin >> num;

	for (int i = 0; i < 12; i += num)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}