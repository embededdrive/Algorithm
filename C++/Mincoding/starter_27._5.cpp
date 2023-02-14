#include <iostream>

using namespace std;

int num[3][3] = {
	0, 5, 4,
	3, 0, 0,
	0, 0, 1
};

void roll() {
	int temp[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			temp[j][2-i] = num[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			num[i][j] = temp[i][j];
		}
	}
}

int main()
{
	int n;
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		roll();
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (num[i][j] == 0) cout << '_';
			else cout << num[i][j];
		}
		cout << '\n';
	}

	return 0;
}