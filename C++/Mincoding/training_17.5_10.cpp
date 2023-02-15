#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] = {
		3, 1, 9,
		7, 2, 1,
		1, 0, 8
	}, mask[3][3];

	bool isExist = false;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> mask[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mask[i][j] == 1)
			{
				if (arr[i][j] >= 3 && arr[i][j] <= 3)
				{
					isExist = true;
					break;
				}
			}
		}
		if (isExist)
		{
			break;
		}
	}

	if (isExist)
	{
		cout << "발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}