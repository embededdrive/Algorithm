#include <iostream>
#include <vector>

using namespace std;

vector<int> v[100000];

int students, about, top;
int upper = -1, lower, linked;

void dfs(int lev, int now)
{
	if (now == about)
	{
		upper = lev;
	}

	int size = v[now].size();

	if (size == 0)
	{
		if(lev > linked) linked = lev + 1;
		if (upper != -1)
		{
			if (lev - upper > lower) lower = lev - upper;
		}
	}

	for (int i = 0; i < size; i++)
	{
		int to = v[now][i];

		dfs(lev + 1, to);
	}
}

int main()
{
	int known;

	cin >> students >> known >> about;

	for (int i = 0; i < known; i++)
	{
		int a, b;
		
		cin >> a >> b;

		v[a].push_back(b);

		if (i == 0)
		{
			top = a;
		}
		else {
			if (b == top)
			{
				top = a;
			}
		}
	}

	dfs(0, top);

	if (students == linked)
	{
		cout << 1 + upper << '\n' << 1 + upper;
	}
	else {
		if (upper == -1)
		{
			cout << 1 << '\n' << students;
		}
		else {
			cout << 1 + upper << '\n' << students - lower;
		}
	}

	return 0;
}