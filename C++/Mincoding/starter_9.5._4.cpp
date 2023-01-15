#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] = {
		{10, 3, 20},
		{60, 30, 40},
		{20, 30, 40}
	}, a, b, num = 0;

	cin >> a >> b;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] >= a && arr[i][j] <= b)
			{
				num++;
			}
		}
	}

	cout << num;

	return 0;
}