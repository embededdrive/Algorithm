#include <iostream>
#include <queue>

using namespace std;

struct Axis {
	int y, x;
};

int main()
{
	int map[4][6], cnt = 0;
	int dY[4] = { -1, 1, 0, 0 };
	int dX[4] = { 0, 0, -1, 1 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> map[i][j];
		}
	}

	queue<Axis> q;

	q.push({ 0, 0 });
	map[posY][posX] = 1;

	while (!q.empty())
	{
		Axis now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int posY = now.y + dY[i];
			int posX = now.x + dX[i];

			if (posY < 0 || posX < 0 || posY >= 4 || posX >= 6)
				continue;

			if (map[posY][posX] == 1)
				continue;

			if (map[posY][posX] == 2)
				cnt++;

			map[posY][posX] = 1;
			q.push({ posY, posX });
		}
	}

	cout << cnt;

	return 0;
}