#include <iostream>

using namespace std;

int n, visited[13];
int mat[12][12], minCost = 2e+09;

void dfs(int from, int sum)
{
	if (from == 0 && sum > 0)
	{
		if (minCost > sum)
		{
			minCost = sum;
		}
		return;
	}

	for (int to = 0; to < n; to++)
	{
		if (!mat[from][to]) continue;
		if (to == 0)
		{
			int total = 0;
			for (int i = 0; i < n; i++) total += visited[i];
			if (total != n) continue;
		}
		
		if (visited[to] && to != 0) continue;
		visited[to] = 1;
		dfs(to, sum + mat[from][to]);
		if (to != 0) visited[to] = 0;
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mat[i][j];
		}
	}

	visited[0] = 1;
	dfs(0, 0);

	cout << minCost;

	return 0;
}