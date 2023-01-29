#include <iostream>

using namespace std;

int main()
{
	int arr[4][4];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		int sumY = 0, sumX = 0, sumZ = 0;
		for (int j = 0; j < 3; j++)
		{
			sumY += arr[i][j];
			sumX += arr[j][i];
			sumZ += arr[j][j];
		}
		arr[i][3] = sumY;
		arr[3][i] = sumX;
		arr[3][3] = sumZ;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}