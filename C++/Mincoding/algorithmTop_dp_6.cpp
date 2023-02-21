#include <iostream>
#include <vector>

using namespace std;

struct Node {
	int y, x;
};

int n;

int damage[1001][1001];
int visited[1001][1001];
int memo[1001][1001];
int dir[1001][1001];

int dY[4] = { -1, 0, 1, 0 };
int dX[4] = { 0, -1, 0, 1 };

int totalDamage(int y, int x)
{
	if (y == 0 && x == 0)
		return 0;

	if (memo[y][x] != 0)
		return memo[y][x];

	int minDamage = 2e08;

	for (int i = 0; i < 2; i++)
	{
		int pY = y + dY[i];
		int pX = x + dX[i];

		if (pY < 0 || pX < 0 || pY >= n || pX >= n)
			continue;

		if (visited[pY][pX])
			continue;

		visited[pY][pX] = 1;

		int ret = totalDamage(pY, pX);

		visited[pY][pX] = 0;

		if (ret < minDamage)
		{
			minDamage = ret;
			dir[y][x] = i;
		}
	}

	minDamage += damage[y][x];
	memo[y][x] = minDamage;

	return minDamage;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> damage[i][j];

	int ret = totalDamage(n - 1, n - 1);

	int y = n - 1;
	int x = n - 1;

	vector<Node> v;

	v.push_back({ y, x });

	while (y != 0 || x != 0)
	{
		if (dir[y][x] == 0)
			y--;
		else if (dir[y][x] == 1)
			x--;
		else if (dir[y][x] == 2)
			y++;
		else if (dir[y][x] == 3)
			x++;

		v.push_back({ y, x });
	}

	cout << ret << '\n';
	while (!v.empty())
	{
		Node log = v[v.size() - 1];
		v.pop_back();

		cout << log.y << ',' << log.x << '\n';
	}

	return 0;
}