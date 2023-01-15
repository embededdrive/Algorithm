#include <iostream>

using namespace std;

int main()
{
	int arr[4][4] = { 0 }, num;

	cin >> num;

	if (num % 2 == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[i][i] = i + 1;
		}
	}
	else {
		num = 3;
		for (int i = 0; i < 4; i++)
		{
			arr[i][num--] = i + 1;
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