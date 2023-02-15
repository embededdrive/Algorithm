#include <iostream>

using namespace std;

int main()
{
	int arr[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 5; i >= 0; i--)
	{
		cout << arr[i] << ' ';

		if (arr[i] == 7)
		{
			break;
		}
	}

	return 0;
}