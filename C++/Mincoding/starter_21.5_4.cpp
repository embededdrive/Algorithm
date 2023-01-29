#include <iostream>

using namespace std;

int main()
{
	char arr[4][4];
	int dy = 1, bottom[3] = { 3, 3, 3 };

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] != '_')
			{
				if (bottom[j] != i)
				{
					arr[bottom[j]][j] = arr[i][j];
					arr[i][j] = '_';
				}
				bottom[j]--;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}
		cout << '\n';
	}

	return 0;
}