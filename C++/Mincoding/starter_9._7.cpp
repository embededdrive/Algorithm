#include <iostream>

using namespace std;

int main()
{
	int arr[6][2], num, count = 0;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 6; i++)
	{
		if (arr[i][1] > arr[i][0])
		{
			num = arr[i][1];
			arr[i][1] = arr[i][0];
			arr[i][0] = num;
			count++;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	cout << count << "명";

	return 0;
}