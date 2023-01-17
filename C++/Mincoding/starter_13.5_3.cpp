#include <iostream>

using namespace std;

int main()
{
	int a[5], b[5], c[5], arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> c[i];
	}

	for (int i = 0; i < 5; i++)
	{
		arr[i] = a[i] * b[i] + c[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}