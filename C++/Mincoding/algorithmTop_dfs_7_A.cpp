#include <iostream>
#include <vector>

using namespace std;

vector<int> vec[2][100000];
int used[2][100000];
int cnt[2];

void dfs(int way, int now)
{
	for (int i = 0; i < vec[way][now].size(); i++)
	{
		int to = vec[way][now][i];
		if (used[way][to]) continue;
		cnt[way]++;
		used[way][to] = 1;
		dfs(way, to);
	}
}

int main()
{
	int n, m, x;

	cin >> n >> m >> x;

	for (int i = 0; i < m; i++)
	{
		int u, v;

		cin >> u >> v;

		vec[0][u].push_back(v);
		vec[1][v].push_back(u);
	}

	dfs(0, x);
	dfs(1, x);

	cout << cnt[1] + 1 << '\n' << n - cnt[0];

	return 0;
}