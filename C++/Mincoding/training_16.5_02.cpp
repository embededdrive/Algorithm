#include <iostream>

using namespace std;

int main()
{
	char mat[6][3], ch = 'A';
	int x, y;

	cin >> x >> y;

	for (int i = 2; i >= 0; i--)
	{
		for (int j = 5; j >= 0; j--)
		{
			mat[j][i] = ch++;
		}
	}

	cout << mat[x][y];

	return 0;
}