#include <iostream>

using namespace std;

int main()
{
	int map[5] = { 0 };
	int idx, nextidx, life;

	cin >> idx >> life;

	map[idx] = life;

	for (int i = 0; i <= life; i++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (map[i] == 0) cout << '_';
			else cout << map[i];
		}
		cout << '\n';

		int nextidx;
		if (idx < 4) nextidx = idx + 1;
		else nextidx = 0;

		map[nextidx] = map[idx] - 1;
		map[idx] = 0;
		idx = nextidx;
	}

	return 0;
}