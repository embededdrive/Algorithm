#include <iostream>

using namespace std;

char name[5], path[4];
int visited[5];

void run(int lev)
{
	if (lev == 3)
	{
		cout << path << '\n';
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (visited[i]) continue;

		visited[i] = 1;
		path[lev] = name[i];
		run(lev + 1);
		path[lev] = 0;
		visited[i] = 0;
	}
}

int main()
{
	cin >> name;

	run(0);

	return 0;
}