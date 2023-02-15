#include <iostream>

using namespace std;

int main()
{
	int mat[3][2][3], a, b;

	cin >> a >> b;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (j == 0) mat[i][j][k] = a;
				else if (j == 1) mat[i][j][k] = b;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << mat[i][j][k] << ' ';
			}
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}