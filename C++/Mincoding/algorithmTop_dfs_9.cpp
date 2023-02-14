#include <iostream>
#include <vector>

using namespace std;

vector<int> arr[31];

int oddLev, evenLev = 1;

void dfs(int lev, int now)
{
	int size = arr[now].size();

	if (lev % 2 == 0) oddLev += size;
	else evenLev += size;

	for (int i = 0; i < arr[now].size(); i++)
	{
		int next = arr[now][i];
		dfs(lev + 1, next);
	}
}

int main()
{
	int n, start;

	cin >> n;

	for (int i = 0; i < n-1; i++)
	{
		int u, v;

		cin >> u >> v;

		if (i == 0) start = u;

		arr[u].push_back(v);
	}

	dfs(0, start);

	if (oddLev > evenLev) cout << evenLev;
	else cout << oddLev;

	return 0;
}