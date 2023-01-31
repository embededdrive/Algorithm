#include <iostream>

using namespace std;

int adj[8][8] = {
	0, 1, 1, 0, 0, 0, 0, 1,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 1, 1, 0, 1, 0,
	0, 0, 0, 0, 0, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0
};

int main()
{
	char ch;
	int node, parent = -1, childs[10], cnt = 0;
	bool noSib = false;

	cin >> ch;

	node = ch - 'A';

	for (int i = 0; i < 8; i++)
	{
		if (adj[i][node] == 1)
		{
			parent = i;
			break;
		}
	}
	if (parent == -1)
	{
		cout << "없음";
		return 0;
	}

	for (int i = 0; i < 8; i++)
	{
		if (adj[parent][i] == 1 && i != node)
		{
			childs[cnt++] = i;
		}
	}

	if (cnt == 0)
	{
		cout << "없음";
		return 0;
	}

	for (int i = 0; i < cnt; i++)
	{
		cout << (char)(childs[i] + 'A') << ' ';
	}

    return 0;
}