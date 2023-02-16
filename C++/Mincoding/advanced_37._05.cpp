#include <iostream>
#include <queue>

using namespace std;

struct Axis {
	int y, x;
	int dist;
};

int map[4][4] = {
	0, 0, 0, 0,
	1, 1, 0, 1,
	0, 0, 0, 0,
	1, 0, 1, 0
};

int main()
{
	int startY, startX, endY, endX, distance;
	int dY[4] = {-1, 1, 0, 0};
	int dX[4] = {0, 0, -1, 1};

	cin >> startY >> startX;
	cin >> endY >> endX;

	queue<Axis> q;

	q.push({ startY, startX, 0 });
	
	while (!q.empty())
	{
		Axis now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int posY = now.y + dY[i];
			int posX = now.x + dX[i];

			if (posY < 0 || posX < 0 || posY >= 4 || posX >= 4)
				continue;

			if (map[posY][posX] != 0)
				continue;

			map[posY][posX] = 1;
			q.push({ posY, posX, now.dist + 1 });
			if (posY == endY && posX == endX)
				distance = now.dist + 1;
		}
	}

	cout << distance << "회";

	return 0;
}