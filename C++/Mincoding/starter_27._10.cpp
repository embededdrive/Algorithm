#include <iostream>

using namespace std;

int arranged[9];

void arrange(int size) {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (arranged[i] > arranged[j])
			{
				int temp = arranged[i];
				arranged[i] = arranged[j];
				arranged[j] = temp;
			}
		}
	}
}

int main()
{
	int a[3][3] = {
		2, 6, 3,
		7, 1, 1,
		3, 4, 2
	};
	int b[2][4] = {
		6, 4, 2, 4,
		1, 1, 5, 8
	};
	int c[2][3] = {
		9, 2, 3,
		4, 2, 1
	};

	int idx = 0, selected[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arranged[idx++] = a[i][j];
		}
	}
	arrange(9);
	for (int i = 0; i < 3; i++)
	{
		selected[0][i] = arranged[8-i];
	}

	idx = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arranged[idx++] = b[i][j];
		}
	}
	arrange(8);
	for (int i = 0; i < 3; i++)
	{
		selected[1][i] = arranged[i];
	}

	idx = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arranged[idx++] = c[i][j];
		}
	}
	arrange(6);
	selected[2][0] = arranged[0];
	selected[2][1] = arranged[1];
	selected[2][2] = arranged[5];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << selected[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}