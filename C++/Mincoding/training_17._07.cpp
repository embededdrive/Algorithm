#include <iostream>

using namespace std;

int main()
{
	int mask[2][5] = {
		0, 0, 1, 0, 0,
		0, 0, 1, 1, 1
	}, arr[2][5] = {
		3, 5, 4, 1, 1,
		3, 5, 2, 5, 6
	}, num;

	bool isExist = false;

	cin >> num;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (mask[i][j] == 1 && arr[i][j] == num)
			{
				isExist = true;
				break;
			}
		}
		if (isExist)
		{
			break;
		}
	}

	if (isExist)
	{
		cout << num << " 존재";
	}
	else {
		cout << num << " 없음";
	}

	return 0;
}