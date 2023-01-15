#include <iostream>

using namespace std;

int main()
{
	int arr[5], counting = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		if (arr[i] >= 3 && arr[i] <= 7)
		{
			counting++;
		}
	}

	cout << counting;

	return 0;
}