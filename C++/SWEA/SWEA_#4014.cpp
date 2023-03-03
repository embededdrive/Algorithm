#define _CRT_NO_SECURE_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int n, x;
int map[20][20];

bool canBuild(int idx, int dir)
{
	int route[20] = { 0 };

	if (dir == 1)
	{
		int prev = map[idx][0];

		for (int i = 1; i < n; i++)
		{
			int next = map[idx][i];
			int dif = abs(next - prev);

			if (dif > 1)
				return false;

			if (next > prev)
			{
				if (i < x)
					return false;

				for (int j = 0; j < x; j++)
				{
					if (map[idx][i - j - 1] != prev)
						return false;

					if (route[i - j - 1] != 0)
						return false;
				}
			}
			else if (next < prev)
			{
				if (n - i < x)
					return false;

				for (int j = 0; j < x; j++)
				{
					if (map[idx][i + j] != next)
						return false;
					
					route[i + j] = x - j;
				}
			}

			prev = next;
		}
	}
	else {
		int prev = map[0][idx];

		for (int i = 1; i < n; i++)
		{
			int next = map[i][idx];
			int dif = abs(next - prev);

			if (dif > 1)
				return false;

			if (next > prev)
			{
				if (i < x)
					return false;

				for (int j = 0; j < x; j++)
				{
					if (map[i - j - 1][idx] != prev)
						return false;

					if (route[i - j - 1] != 0)
						return false;
				}
			}
			else if (next < prev)
			{
				if (n - i < x)
					return false;

				for (int j = 0; j < x; j++)
				{
					if (map[i + j][idx] != next)
						return false;

					route[i + j] = x - j;
				}
			}

			prev = next;
		}
	}

	return true;
}

int main()
{
	freopen("input.txt", "r", stdin);

	int t;

	cin >> t;

	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n >> x;

		int ans = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> map[i][j];

		
		for (int i = 0; i < n; i++)
			ans += canBuild(i, 0) << ' ';

		for (int i = 0; i < n; i++)
			ans += canBuild(i, 1) << ' ';

		cout << '#' << tc << ' ' << ans << '\n';
	}

	return 0;
}