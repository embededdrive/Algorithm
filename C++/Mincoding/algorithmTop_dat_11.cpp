#include <iostream>

using namespace std;

int bomb[1001][1001];

void explode(int cnt, int* rem, int size)
{
	int dy[4] = { -1, 0, 1, 0 };
	int dx[4] = { 0, -1, 0, 1 };
	int cy, cx;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (bomb[i][j] == cnt)
			{
				cy = i;
				cx = j;

				if (bomb[cy][cx] != 0)
				{
					bomb[cy][cx] = 0;
					*rem = *rem - 1;
				}

				for (int k = 0; k < 4; k++)
				{
					int posY = cy + dy[k];
					int posX = cx + dx[k];

					if (posY >= 0 && posY < size && posX >= 0 && posX < size)
					{
						if (bomb[posY][posX] != 0)
						{
							bomb[posY][posX] = 0;
							*rem = *rem - 1;
						}
					}
				}
				return;
			}
		}
	}
}

int main()
{
	int n, remain, cnt = 0;

	cin >> n;
	remain = n * n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int num;
			cin >> num;
			bomb[i][j] = num;
		}
	}

	while (remain > 0)
	{
		explode(++cnt, &remain, n);
	}

	cout << cnt << "초";

	return 0;
}