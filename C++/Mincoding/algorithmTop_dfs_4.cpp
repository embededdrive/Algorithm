#include <iostream>

using namespace std;

int n, destination, mat[101][101];
int visited[101], maxPrice = 0, minPrice = 2e+09;

void dfs(int from, int sum)
{
	if (from == destination)
	{
		if (maxPrice < sum) maxPrice = sum;
		if (minPrice > sum) minPrice = sum;
		return;
	}

	for (int to = 0; to < n; to++)
	{
		if (!mat[from][to]) continue;
		if (visited[to]) continue;

		visited[to] = 1;
		dfs(to, sum + mat[from][to]);
		visited[to] = 0;
	}
}

int main()
{
	int from;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mat[i][j];
		}
	}

	cin >> from >> destination;

	visited[0] = 1;
	dfs(from, 0);

	cout << minPrice << '\n' << maxPrice;

	return 0;
}