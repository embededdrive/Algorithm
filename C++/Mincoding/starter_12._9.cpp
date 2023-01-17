#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] = { 0 }, num = 1;
	char input;

	cin >> input;
	if (input >= '0' && input <= '9')
	{
		for (int i = 2; i >= 0; i--)
		{
			for (int j = 2; j >= i; j--)
			{
				arr[i][j] = num++;
			}
		}
	}

	if (input >= 'A' && input <= 'Z')
	{
		for (int i = 2; i >= 0; i--)
		{
			for (int j = 0; j <= i; j++)
			{
				arr[i][j] = num++;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 0)
			{
				cout << ' ';
			}
			else {
				cout << arr[i][j];
			}

		}
		cout << endl;
	}

	return 0;
}