#include <iostream>

using namespace std;

int main()
{
	int arr[6] = {0}, a, b;

	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		arr[i - a] = i;
	}

	for (int i = 0; i <= b - a; i++)
	{
		cout << arr[i];
	}

	return 0;
}