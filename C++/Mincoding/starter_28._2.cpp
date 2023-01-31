#include <iostream>

using namespace std;

int main()
{
	int adj[10][10] = { 0, }, num, cnt = 0;
	int boss, under[10];

    cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cin >> adj[i][j];
		}
	}

	for (int i = 0; i < num; i++)
	{
		if (adj[0][i] == 1)
		{
			under[cnt++] = i;
		}
		if (adj[i][0] == 1)
		{
			boss = i;
		}
	}

	cout << "boss:" << boss << '\n';
	cout << "under:";
	for (int i = 0; i < cnt; i++)
	{
		cout << under[i] << ' ';
	}

    return 0;
}