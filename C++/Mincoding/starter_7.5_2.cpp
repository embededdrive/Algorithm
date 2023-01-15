#include <iostream>

using namespace std;

int main()
{
	int arr[6] = {0}, a, b, c;

	cin >> a >> b >> c;

	for (int i = 0; i < 6; i++)
	{
		if (i == a || i == b || i == c)
		{
			arr[i] = 1;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}