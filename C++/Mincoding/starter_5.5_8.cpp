#include <iostream>

using namespace std;

int main()
{
	int arr[6], a, b;
	cin >> a >> b;

	for (int i = 0; i < 3; i++)
	{
		arr[i] = a + i;
	}
	for (int i = 5; i > 2; i--)
	{
		arr[i] = b - (5 - i);
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}