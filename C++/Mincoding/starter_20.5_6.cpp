#include <iostream>

using namespace std;

int main()
{
	int arr[7];
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	for (int i = 3; i <= 6; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << arr[j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}