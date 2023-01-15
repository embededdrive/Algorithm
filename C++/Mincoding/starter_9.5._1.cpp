#include <iostream>

using namespace std;

int main()
{
	int a[5] = { 2, 1, 2, 4, 5 }, num, count = 0;
	int b[3][3] = {
		{2, 5, 3},
		{4, 5, 7},
		{8, 7, 2}
	};

	cin >> num;

	for (int i = 0; i < 5; i++)
	{
		if (a[i] == num) count++;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (b[i][j] == num) count++;
		}
	}

	cout << count;

	return 0;
}