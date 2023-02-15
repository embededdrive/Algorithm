#include <iostream>

using namespace std;

int arr[3][3];

int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
		{
			cout << arr[i][0];
		}
		else cout << 'x';
		cout << '\n';
	}

	return 0;
}