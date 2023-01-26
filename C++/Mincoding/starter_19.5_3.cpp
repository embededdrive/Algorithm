#include <iostream>

using namespace std;

int main()
{

	int arr[4], mat[4][4] = { 0 }, num = 1, input = 1;

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				if (arr[k] == num)
				{
					mat[i][j] = input++;
					break;
				}
			}
			num++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}