#include <iostream>

using namespace std;

int main()
{
	int arr[4][4], num = 1;

	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[j][i] = num++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}