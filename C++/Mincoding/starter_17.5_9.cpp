#include <iostream>

using namespace std;

int main()
{
	int arr[6], mask[6] = { 1, 0, 1, 0, 1, 0 }, min = 9999, minidx;

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 6; i++)
	{
		arr[i] = arr[i] * mask[i];
	}

	for (int i = 0; i < 6; i++)
	{
		if (mask[i] == 1)
		{
			if (min > arr[i])
			{
				min = arr[i];
				minidx = i;
			}
		}
	}

	cout << "arr[" << minidx << "]=" << min;

	return 0;
}