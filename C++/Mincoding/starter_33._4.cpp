#include<iostream>

using namespace std;

int n, k;
int group[21];
char grade[21] = { 0 };

void init()
{
	for (int i = 0; i <= 20; i++)
		group[i] = i;
}

int find(int now)
{
	if (now == group[now]) return now;

	int ret = find(group[now]);
	group[now] = ret;
	return ret;
}

void uunion(int a, int b)
{
	int pa = find(a);
	int pb = find(b);

	if (pa == pb) return;

	group[pb] = group[pa];
}

int main()
{
	init();

    cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		char a, b;

		cin >> a >> b;

		if (a >= 'A' && a <= 'Z')
		{
			grade[b - '0'] = a;
		}
		else if (b >= 'A' && b <= 'Z')
		{
			grade[a - '0'] = b;
		}
		else {
			uunion(a - '0', b - '0');
		}
	}

	for (int i = 0; i < k; i++)
	{
		if (grade[i] != 0)
		{
			grade[group[i]] = grade[i];
		}
	}

	for (int i = 0; i < k; i++)
	{
		cout << grade[group[i]];
	}

    return 0;
}