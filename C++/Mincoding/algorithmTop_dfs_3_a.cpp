#include <iostream>
#include <vector>

using namespace std;

int n, pattern = 1;
vector<int> v[1001];
vector<int> pattern1, pattern2, pattern3;

void dfs(int now)
{
	if (now == -1) return;

	pattern2.push_back(now);

	int to = v[now][0];
	dfs(to);

	pattern1.push_back(now);

	to = v[now][1];
	dfs(to);

	pattern3.push_back(now);
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

	for (auto it = pattern1.begin(); it != pattern1.end(); it++)
		cout << *it << ' ';
	cout << '\n';
	for (auto it = pattern2.begin(); it != pattern2.end(); it++)
		cout << *it << ' ';
	cout << '\n';
	for (auto it = pattern3.begin(); it != pattern3.end(); it++)
		cout << *it << ' ';
	cout << '\n';

	return 0;
}