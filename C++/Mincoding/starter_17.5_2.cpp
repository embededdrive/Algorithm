#include <iostream>

using namespace std;

int arr[6] = { 3, 7, 4, 1, 2, 6 };

bool isExist(int target) {
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == target)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int univer[2][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> univer[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (isExist(univer[i][j]))
			{
				cout << "OK ";
			}
			else {
				cout << "NO ";
			}
		}
		cout << '\n';
	}

	return 0;
}