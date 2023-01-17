#include <iostream>

using namespace std;

int main()
{
	int arr[5][5] = { 0 }, num;

	cin >> num;

	for (int i = 0; i < 5; i++)
	{
		arr[i][0] = num;
		arr[i][4] = num;
		arr[0][i] = num;
		arr[4][i] = num;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 0)
			{
				cout << '_';
			}
			else {
				cout << arr[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}