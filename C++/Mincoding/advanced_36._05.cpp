#include <iostream>
#include <queue>

using namespace std;

struct Node {
	int nY, nX;
	int accCost;
};

struct cmp
{
	bool operator() (Node& left, Node& right)
	{
		return left.accCost > right.accCost;
	}
};

int map[1001][1001], dist[1001][1001];
const int INF = 2e+09;

int main()
{
	int cY, cX, N, max = 0;
	int dY[4] = {0, 0, -1, 1};
	int dX[4] = {-1, 1, 0, 0};

	cin >> cY >> cX >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}

	priority_queue<Node, vector<Node>, cmp> pq;

	pq.push({ cY, cX, map[cY][cX]});

	for (int i = 0; i <= N; i++)
		for (int j = 0; j <= N; j++)
			dist[i][j] = INF;

	dist[cY][cX] = map[cY][cX];

	while (!pq.empty())
	{
		Node now = pq.top();
		pq.pop();

		if (now.accCost > dist[now.nY][now.nX]) continue;
		if (max < now.accCost) max = now.accCost;
		
		for (int i = 0; i < 4; i++)
		{
			int posY = now.nY + dY[i];
			int posX = now.nX + dX[i];

			if (map[posY][posX] == -1) continue;
			if (posY < 0 || posX < 0 || posY >= N || posX >= N) continue;

			int newCost = now.accCost + map[posY][posX];

			if (dist[posY][posX] <= newCost) continue;
			dist[posY][posX] = newCost;

			pq.push({ posY, posX, newCost });
		}
	}

	cout << max;

	return 0;
}