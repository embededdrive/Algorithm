
#include <iostream>

using namespace std;

int arr[4][4] = {
	3, 4, 1, 6,
	3, 5, 3, 6,
	0, 0, 0, 0,
	5, 4, 6, 0
};

int main()
{
	int MAX, MIN, MAXy, MAXx, MINy, MINx;

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[2][i];
	}

	MAX = arr[0][0];
	MIN = arr[0][0];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] > MAX)
			{
				MAX = arr[i][j];
				MAXy = i;
				MAXx = j;
			}
			if (arr[i][j] < MIN)
			{
				MIN = arr[i][j];
				MINy = i;
				MINx = j;
			}
		}
	}

	cout << "MAX=" << MAX << "(" << MAXy << "," << MAXx << ")" << endl;
	cout << "MIN=" << MIN << "(" << MINy << "," << MINx << ")";

	return 0;
}