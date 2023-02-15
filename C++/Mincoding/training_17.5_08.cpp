#include <iostream>

using namespace std;

int map[2][3] = {
	3, 55, 42,
	-5, -9, -10
};

bool isExist(int num) {
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (map[i][j] == num)
			{
				return true;
			}
		}
	}
	return false;
}



int main()
{
	int pix[2][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> pix[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (isExist(pix[i][j]))
			{
				cout << "Y ";
			}
			else {
				cout << "N ";
			}
		}
		cout << '\n';
	}

	return 0;
}