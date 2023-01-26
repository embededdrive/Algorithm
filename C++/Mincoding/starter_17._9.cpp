#include <iostream>

using namespace std;

int getCount(int vect[3][3], int target)
{
	int cnt = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (vect[i][j] == target)
			{
				cnt++;
			}
		}
	}
	return cnt;
}

int main()
{
	int vect[3][3] = {
		3, 7, 4,
		2, 2, 4,
		2, 2, 5
	}, target[3], max = 0, num;

	for (int i = 0; i < 3; i++)
	{
		cin >> target[i];
	}


	for (int i = 0; i < 3; i++)
	{
		int cnt = getCount(vect, target[i]);

		if (cnt > max)
		{
			max = cnt;
			num = target[i];
		}
	}

	cout << num;

	return 0;
}