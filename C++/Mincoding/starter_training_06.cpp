#include <iostream>

using namespace std;

int main()
{
	int arr[9] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		int a, b;

		cin >> a >> b;

		for (int j = a; j <= b; j++)
		{
			arr[j]++;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}