#include <iostream>
#include <string>

using namespace std;

int mat[101][101], visited[101];
int nodeCnt, edgeCnt;
bool preOrder = true;


void dfs(int from)
{
	if (preOrder) cout << from << ' ';
	for (int to = nodeCnt; to >= 1; to--)
	{
		if (!mat[from][to]) continue;
		if (visited[to]) continue;

		visited[to] = 1;
		dfs(to);
	}
	if (!preOrder) cout << from << ' ';
}

int main()
{
	int s;

	cin >> nodeCnt >> edgeCnt;
	cin >> s;

	for (int i = 0; i < edgeCnt; i++)
	{
		int from, to;
		cin >> from >> to;

		mat[from][to] = 1;
	}

	visited[s] = 1;
	dfs(s);

	cout << '\n';
	preOrder = false;
	memset(visited, 0, sizeof(visited));
	visited[s] = 1;
	dfs(s);

	return 0;
}