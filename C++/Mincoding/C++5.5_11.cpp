#include <iostream>

using namespace std;

int main()
{
	int arr[6], num;

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	cin >> num;

	for (int i = 3; i < 6; i++)
	{
		arr[i] = num + (i - 3);
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}