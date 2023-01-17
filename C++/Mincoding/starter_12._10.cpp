#include <iostream>

using namespace std;

int main()
{
	char arr[5][5] = { 0 }, ch;
	int num;

	cin >> num >> ch;

	for (int i = 4; i >= 0; i--)
	{
		arr[num - 1][i] = ch++;
	}
	for (int i = 0; i < 5; i++)
	{
		if (i != num - 1)
		{
			for (int j = 0; j < 5; j++)
			{
				arr[i][j] = '0';
			}
		}

	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}


	return 0;
}