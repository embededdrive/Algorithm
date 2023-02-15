#include<iostream>

using namespace std;

int n, k;
char parent[200];

char find(char now)
{
	if (now == parent[now]) return now;

	char ret = find(parent[now]);
	parent[now] = ret;
	return ret;
}

void uunion(char a, char b)
{
	char pa = find(a);
	char pb = find(b);

	if (pa == pb) return;

	if (pa >= 'A' && pa <= 'Z')
		parent[pb] = pa;
	else
		parent[pa] = pb;
}

int main()
{
	for (char ch = '0'; ch <= 'Z'; ch++)
	{
		parent[ch] = ch;
	}
	
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		char a, b;
		cin >> a >> b;

		uunion(a, b);
	}

	for (int i = 1; i <= k; i++)
	{
		cout << find(i + '0');
	}

	return 0;
}