#include <iostream>

using namespace std;

int arr[5][4];

bool isClose(int x, int y)
{
	int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

	for (int i = 0; i < 8; i++)
	{
		int posx = x + dx[i];
		int posy = y + dy[i];

		if (posx >= 0 && posx < 5 && posy >= 0 && posy < 4)
		{
			if (arr[posx][posy] == 1)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	bool isUnstable = false;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 1 && isClose(i, j))
			{
				isUnstable = true;
				break;
			}
		}
	}
	
	if (isUnstable)
	{
		cout << "불안정한 상태";
	}
	else {
		cout << "안정된 상태";
	}

	return 0;
}