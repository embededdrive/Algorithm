#include <iostream>

using namespace std;

int main()
{
	int mat[4][4], num;

	cin >> num;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i % 2 == 0)
			{
				mat[i][j] = num++;
			}
			else {
				mat[i][3 - j] = num++;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << mat[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}