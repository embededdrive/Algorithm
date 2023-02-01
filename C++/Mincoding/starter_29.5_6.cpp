#include <iostream>

using namespace std;

int main()
{
	int wheel[3][4] = {
		3, 2, 5, 3,
		7, 6, 1, 6,
		4, 9, 2, 7
	};

	for (int i = 0; i < 4; i++)
	{
		int n;

		cin >> n;

		for (int j = 0; j < n; j++)
		{
			int temp = wheel[2][i];
			wheel[2][i] = wheel[1][i];
			wheel[1][i] = wheel[0][i];
			wheel[0][i] = temp;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << wheel[i][j];
		}
		cout << '\n';
	}


	return 0;
}