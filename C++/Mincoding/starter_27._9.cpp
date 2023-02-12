#include <iostream>

using namespace std;

int main()
{
	int arr[4][4];
	int dy[4] = {0, -1, 0, 1};
	int dx[4] = {-1, 0, 1, 0};
	bool danger = false;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 1)
			{
				for (int k = 0; k < 4; k++)
				{
					int posY = i + dy[k];
					int posX = i + dx[k];

					if (arr[posY][posX] == 1) {
						danger = true;
						break;
					}
				}
			}
			if (danger) break;
		}
		if (danger) break;
	}

	if (danger) cout << "위험한 상태";
	else cout << "안전한 상태";

	return 0;
}