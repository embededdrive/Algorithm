#include <iostream>

using namespace std;

int main()
{
	int mat[4][3] = {
		1, 5, 3,
		4, 5, 5,
		3, 3, 5,
		4, 6, 2
	}, a, b;

	cin >> a >> b;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mat[i][j] >= a && mat[i][j] <= b)
			{
				mat[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mat[i][j] == 0)
			{
				cout << "# ";
			}
			else {
				cout << mat[i][j] << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}