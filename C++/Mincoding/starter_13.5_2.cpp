#include <iostream>

using namespace std;

int main()
{
	int arr[7] = { 4, 2, 5, 1, 6, 7, 3 }, num = 0;
	char a, b;

	cin >> a >> b;

	if (a > b)
	{
		for (int i = b - 'A' + 1; i < a - 'A'; i++)
		{
			num += arr[i];
		}
	}
	else {
		for (int i = a - 'A' + 1; i < b - 'A'; i++)
		{
			num += arr[i];
		}
	}

	cout << num;

	return 0;
}