#include <iostream>

using namespace std;

bool isExist(int arr[3][3], int num)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == num)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int arr[3][3] = {
		3, 5, 9,
		4, 2, 1,
		5, 1, 5
	}, target[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> target[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (isExist(arr, target[i]))
		{
			cout << target[i] << ":존재" << '\n';
		}
		else {
			cout << target[i] << ":미발견" << '\n';
		}
	}

	return 0;
}