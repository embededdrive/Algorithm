#include <iostream>
#include <queue>

using namespace std;

struct Axis {
	int y, x;
};

int main()
{
	int map[4][4] = { 0 };
	int visited[4][4] = { 0 };
	int dY[4] = {-1, 1, 0, 0};
	int dX[4] = { 0, 0, -1, 1 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> map[i][j];
		}
	}

	queue<Axis> q;

	q.push({ 0, 0 });
	visited[0][0] = 1;

	int size = 0;

	while (!q.empty())
	{
		Axis now = q.front();
		q.pop();
		size++;

		for (int i = 0; i < 4; i++)
		{
			int posY = now.y + dY[i];
			int posX = now.x + dX[i];

			if (posY < 0 || posX < 0 || posY >= 4 || posX >= 4)
				continue;

			if (map[posY][posX] != 1)
				continue;

			if (visited[posY][posX])
				continue;

			visited[posY][posX] = 1;
			q.push({posY, posX});
		}
	}

	cout << size;

	return 0;
}