#include <iostream>

using namespace std;

int main()
{
	int arr[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0)
			{

				cout << '!';
			}
			else if (arr[i][j] % 2 == 0)
			{
				cout << '#';

			}
			else {
				cout << '@';
			}
		}
		cout << endl;
	}

	return 0;
}