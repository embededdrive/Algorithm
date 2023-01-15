#include <iostream>

using namespace std;

int main()
{
	int arr[5][5], num = 1, input;

	for (int i = 4; i >= 0; i--)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[j][i] = num++;
		}
	}

	cin >> input;

	for (int i = 0; i < 5; i++)
	{
		arr[input][i] = input;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}