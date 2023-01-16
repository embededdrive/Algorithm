#include <iostream>

using namespace std;

int arr[2][5] = {
	{3, 2, 6, 2, 4},
	{1, 4, 2, 6, 5}
};

int KFC(int num)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == num)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	int target, ret;

	cin >> target;

	ret = KFC(target);

	if (ret)
	{
		cout << "값이 존재합니다";
	}
	else {
		cout << "값이 없습니다";
	}

	return 0;
}

