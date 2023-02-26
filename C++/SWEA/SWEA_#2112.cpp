#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int film[13][20];
int changed[13][20];
int d, w, k;
int injectCnt;


bool checkFilm() {

	for (int i = 0; i < w; i++)
	{
		bool pass = false;

		int start = 0;
		int end = k - 1;

		while (start <= d - k)
		{
			end++;
			bool isSame = true;
			for (int j = start + 1; j < end; j++)
				if (changed[start][i] != changed[j][i])
					isSame = false;

			if (isSame)
			{
				pass = true;
				break;
			}

			start++;
		}

		if (!pass)
			return false;
	}
	return true;
}

int used[13];
char path[13];
char path2[13];

bool passed = false;


void dfs2(int lev)
{
	if (passed)
		return;

	if (lev == injectCnt)
	{
		for (int i = 0; i < d; i++)
			for (int j = 0; j < w; j++)
				changed[i][j] = film[i][j];

		for (int i = 0; i < injectCnt; i++)
			for (int j = 0; j < w; j++)
				changed[path[i] - '0'][j] = path2[i] - '0';

		bool ret = checkFilm();
		if (ret)
			passed = true;
		return;
	}

	for (int i = 0; i < 2; i++)
	{
		path2[lev] = i + '0';
		dfs2(lev + 1);
		path2[lev] = 0;
	}

	return;
}

void dfs(int lev, int start)
{
	if (passed)
		return;

	if (lev == injectCnt)
	{
		dfs2(0);
		return;
	}

	for (int i = start + 1; i < d; i++)
	{

		if (used[i])
			continue;

		used[i] = 1;
		path[lev] = i + '0';
		dfs(lev + 1, i);
		path[lev] = 0;
		used[i] = 0;

	}

	return;
}

int main()
{
	freopen("input.txt", "r", stdin);

	int t;

	cin >> t;

	for (int tc = 1; tc <= t; tc++)
	{
		passed = false;


		cin >> d >> w >> k;

		for (int i = 0; i < d; i++)
			for (int j = 0; j < w; j++)
			{
				cin >> film[i][j];
				changed[i][j] = film[i][j];
			}

		bool ret = false;
		int ans = -1;

		while (!ret)
		{
			ans++;
			if (ans == 0)
				ret = checkFilm();
			else {
				injectCnt = ans;
				dfs(0, -1);
				ret = passed;
			}
		}

		cout << '#' << tc << ' ' << ans << '\n';
	}

	return 0;
}