#include <iostream>

using namespace std;

int main()
{
	int a, b, c, arr[3][4];

	cin >> a >> b >> c;

	for (int i = 0; i < 4; i++)
	{
		arr[0][i] = a + i;
		arr[1][i] = b + i;
		arr[2][i] = c + i;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}