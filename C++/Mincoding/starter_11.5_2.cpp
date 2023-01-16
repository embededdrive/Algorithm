#include <iostream>

using namespace std;

int arr[3][3] = {
	1, 1, 1,
	1, 2, 1,
	3, 6, 3
};

int Count(int get)
{
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == get)
			{
				count++;
			}
		}
	}

	return count;
}

int main()
{
	int num, ret;

	cin >> num;

	ret = Count(num);

	cout << ret;

	return 0;
}