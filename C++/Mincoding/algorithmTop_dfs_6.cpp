#include <iostream>
#include <cstring>

using namespace std;

char path[21];
char bridge[2][101];
int way, cnt, bridgeLen, steps;

void dfs(int lev, int start)
{
	if (lev == steps)
	{
		cnt++;
		return;
	}

	for (int i = start; i < bridgeLen; i++)
	{
		if (bridge[way][i] != path[lev]) continue;
		if (way == 1) way = 0;
		else way = 1;
		dfs(lev + 1, i + 1);
		if (way == 1) way = 0;
		else way = 1;
	}
}

int main()
{
	cin >> path >> bridge[0] >> bridge[1];
	
	bridgeLen = strlen(bridge[0]);
	steps = strlen(path);
	
	dfs(0, 0);
	way = 1;
	dfs(0, 0);

	cout << cnt;

	return 0;
}