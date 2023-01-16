#include <iostream>

using namespace std;

int main()
{
	int num, arr[3][4] = {'\0'}, idx = 2;

	cin >> num;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j >= idx)
			{
				arr[i][j] = num++;
			}
		}
		idx--;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == '\0')
			{
				cout << ' ';
			}
			else {
				cout << arr[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}