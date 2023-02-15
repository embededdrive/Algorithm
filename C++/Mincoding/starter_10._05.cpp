#include <iostream>

using namespace std;

int main()
{
	int input, arr[3][3], num;

	cin >> input;

	if (input % 5 == 1)
	{
		num = 9;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[j][i] = num--;
			}
		}
	}
	else if (input % 5 == 2)
	{
		num = 1;
		for (int i = 2; i >= 0; i--)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = num++;
			}
		}
	}
	else {
		num = 10;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[j][i] = num++;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}