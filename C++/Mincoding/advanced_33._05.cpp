#include<iostream>
#include<cstring>

using namespace std;

char group[256];
int population[256];

char find(char now)
{
	if (group[now] == now) return now;

	char ret = find(group[now]);
	group[now] = ret;
	return ret;
}

void uunion(char a, char b)
{
	char pa = find(a);
	char pb = find(b);

	if (pa == pb) return;

	population[pa] += population[pb];
	group[pb] = pa;
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int pop;
		char ch = i + 'A';

		cin >> pop;

		population[ch] = pop;
		group[ch] = ch;
	}

	int act;

	cin >> act;

	for (int i = 0; i < act; i++)
	{
		char cmd[10], a, b;

		cin >> cmd >> a >> b;

		if (strcmp(cmd, "alliance") == 0)
		{
			uunion(a, b);
		}
		else if (strcmp(cmd, "war") == 0)
		{
			char pa = find(a);
			char pb = find(b);

			if (population[pa] > population[pb])
				population[pb] = 0;
			else
				population[pa] = 0;
		}
	}

	int remains = 0;

	for (int i = 0; i < n; i++)
	{
		char ch = i + 'A';
		char pch = find(ch);

		if (population[pch] == 0) continue;
		remains++;
	}

	cout << remains;

	return 0;
}