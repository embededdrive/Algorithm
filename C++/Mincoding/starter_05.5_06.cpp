#include <iostream>

using namespace std;

int main()
{
	int arr[7] = {3, 5, 1, 2, 4, 6, 7};
	int a, b;

	cin >> a >> b;

	for (int i = a; i < b + 1; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}