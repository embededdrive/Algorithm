#include <iostream>

using namespace std;

int arrA[4][4], arrB[4][4];

bool isDup() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arrA[i][j] == 1 && arrB[i][j] == 1)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arrA[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arrB[i][j];
		}
	}

	if (isDup())
	{
		cout << "걸리다";
	}
	else {
		cout << "걸리지않는다";
	}

	return 0;
}