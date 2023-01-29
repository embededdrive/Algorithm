#include <iostream>

using namespace std;

int main()
{
	int arr[5] = { 3, 5, 1, 9, 7 }, temp;

	for (int i = 0; i < 4; i++)
	{
		char ch;
		cin >> ch;

		if (ch == 'L')
		{
			temp = arr[0];
			for (int i = 0; i < 4; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[4] = temp;
		}
		else if (ch == 'R')
		{
			temp = arr[4];
			for (int i = 4; i > 0; i--)
			{
				arr[i] = arr[i - 1];
			}
			arr[0] = temp;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}