#include <iostream>
#include <queue>

using namespace std;

struct Axis {
	int y, x;
};

int main()
{
	int explode[4][5];
	int dY[8] = {0, -1, -1, -1, 0, 1, 1, 1};
	int dX[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

	queue<Axis> q;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int state;
			cin >> state;
			explode[i][j] = state;

			if (state == 1)
				q.push({ i, j });
		}
	}

	int cnt = -1;

	while (!q.empty())
	{
		int size = q.size();

		cnt++;

		for (int i = 0; i < size; i++)
		{
			Axis now = q.front();
			q.pop();


			for (int j = 0; j < 8; j++)
			{
				int posY = now.y + dY[j];
				int posX = now.x + dX[j];

				if (posY < 0 || posX < 0 || posY >= 4 || posX >= 5)
					continue;

				if (explode[posY][posX] == 1)
					continue;

				explode[posY][posX] = 1;
				q.push({ posY, posX });
			}
		}
	}

	cout << cnt;

    return 0;
}