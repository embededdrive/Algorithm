#include <iostream>

using namespace std;

int main()
{
	int arr[7] = { 3, 5, 5, 6, 9, 1, 2 }, a, b;

	cin >> a >> b;

	int size = b - a + 1;

	for (int i = 0; i < size / 2; i++)
	{
		int temp = arr[a + i];
		arr[a + i] = arr[a + size - i - 1];
		arr[a + size - i - 1] = temp;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}