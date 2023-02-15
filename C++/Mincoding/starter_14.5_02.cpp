#include <iostream>

using namespace std;

int main()
{
	int arr[5][5], num;

	cin >> num;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}

	if (num == 1)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << arr[i][j] << ' ';
			}
			cout << endl;
		}
	}
	else if (num == 2)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j <= (4 - i); j++)
			{
				cout << arr[i][j] << ' ';
			}
			cout << endl;
		}
	}

	return 0;
}