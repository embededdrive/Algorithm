#include <iostream>

using namespace std;

int main()
{
	char mat[4][5] = {
		"ABKT",
		"KFCF",
		"BBQQ",
		"TPZF"
	}, a, b;

	int cnt = 0;

	cin >> a >> b;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (mat[i][j] == a || mat[i][j] == b)
			{
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}