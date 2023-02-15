#include <iostream>

using namespace std;

int main()
{
	int mat[7][4] = { 0 }, num = 1, a, b, c;

	cin >> a >> b >> c;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			mat[i][j] = num++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		mat[a][i] = 0;
		mat[b][i] = 0;
		mat[c][i] = 0;
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}