#include <iostream>

using namespace std;

int map[11] = { 0, 3, 1, 2, 1, 3, 2, 1, 2, 1, 0 };

void run(int lev)
{
	int step = map[lev];
	int nextlev = step + lev;

	if (step == 0) {
		cout << "도착 ";
		return;
	}

	cout << step << ' ';
	run(nextlev);
	cout << step << ' ';
}

int main()
{
	int st;

	cin >> st;

	cout << "시작 ";
	run(st);
	cout << "시작";

	return 0;
}