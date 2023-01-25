#include <iostream>

using namespace std;

int main()
{
	int arr[6];

	cin >> arr[0] >> arr[1];

	for (int i = 2; i < 6; i++)
	{
		arr[i] = arr[i - 1] * arr[i - 2];
	}

	cout << arr[5];

	return 0;
}