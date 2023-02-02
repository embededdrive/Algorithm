#include <iostream>

using namespace std;

int arr[6][6];
char path[10];

void dfs(int now, int lev)
{
	bool isEnd = true;
	for (int to = 0; to < 6; to++)
	{
		if (!arr[now][to]) continue;
		isEnd = false;
		path[lev + 1] = 'A' + to;
		dfs(to, lev + 1);
		path[lev + 1] = 0;
	}
	if (isEnd)
		cout << path << '\n';

}

int main()
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> arr[i][j];
		}
	}

	path[0] = 'A';
	dfs(0, 0);

	return 0;
}