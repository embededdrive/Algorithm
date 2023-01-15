#include <iostream>

using namespace std;

int main()
{
	int arr[6][3], a, b, num = 10;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			arr[j][i] = num++;
		}
	}

	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = 7;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}