#include <iostream>
#include <string>

using namespace std;

int adj[100][100], nodeCnt, cnt;
int defected[100];

void dfs(int from)
{
	for (int to = 0; to < nodeCnt; to++)
	{
		if (!adj[from][to]) continue;
		if (defected[to]) continue;

		defected[to] = 1;
		cnt++;
		dfs(to);
	}
}

int main()
{
	int edgeCnt;

	cin >> nodeCnt;
	cin >> edgeCnt;
	for (int i = 0; i < edgeCnt; i++)
	{
		int from, to;
		cin >> from >> to;
		adj[from - 1][to - 1] = 1;
	}

	dfs(0);

	cout << cnt;

	return 0;
}