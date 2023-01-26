#include <iostream>

using namespace std;

int main()
{
	int arr[4] = { 3, 5, 4, 2 }, mask[4], sum = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> mask[i];
	}

	for (int i = 0; i < 4; i++)
	{
		if (mask[i] == 1)
		{
			sum += arr[i];
		}
	}

	cout << sum;

	return 0;
}