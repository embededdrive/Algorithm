#include <iostream>

using namespace std;

int main()
{
	int arr[6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < 6; i++)
	{
		arr[i] = arr[i] + arr[i - 1];
	}
	
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}