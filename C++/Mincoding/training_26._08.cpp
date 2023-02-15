#include <iostream>

using namespace std;

int path[3];

void game(int lev)
{
	if (lev == 3)
	{
		int lose = path[0] + path[1] + path[2];
		int win = 3 - lose;
		
		if (win == 3) cout << win << "승(";
		else if (lose == 3) cout << lose << "패(";
		else cout << win << "승" << lose << "패(";

		for (int i = 0; i < 3; i++)
		{
			if (path[i] == 0) cout << "승";
			else cout << "패";
		}
		cout << ")\n";

		return;
	}

	for (int i = 0; i < 2; i++)
	{
		path[lev] = i;
		game(lev + 1);
		path[lev] = 0;
	}
}

int main()
{
	game(0);

	return 0;
}