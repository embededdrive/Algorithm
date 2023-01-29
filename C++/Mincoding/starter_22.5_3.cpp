#include <iostream>

using namespace std;

int main()
{
	char mat[3][3][4] = { 0 }, ch;

	cin >> ch;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				mat[i][j][k] = ch;
			}
		}
		ch++;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << mat[i][j][k];
			}
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}