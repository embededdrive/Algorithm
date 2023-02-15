#include <iostream>

using namespace std;

int main()
{
	int arr[6] = { 3, 4, 2, 5, 7, 9 }, a, b, num;

	cin >> a >> b;

	num = arr[a];

	arr[a] = arr[b];
	arr[b] = num;

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}