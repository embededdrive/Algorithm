#include <iostream>
#include <vector>

using namespace std;

int n, pattern = 1;
vector<int> v[1001];

void dfs(int now)
{
	if (pattern == 2) cout << now << ' ';

	int to = v[now][0];
	if (to != -1) dfs(to);

	if (pattern == 1) cout << now << ' ';

	to = v[now][1];
	if (to != -1) dfs(to);

	if (pattern == 3) cout << now << ' ';
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int idx, left, right;

		cin >> idx >> left >> right;

		v[idx].push_back(left);
		v[idx].push_back(right);
	}

	dfs(1);
	cout << '\n';
	pattern = 2;
	dfs(1);
	cout << '\n';
	pattern = 3;
	dfs(1);

	return 0;
}