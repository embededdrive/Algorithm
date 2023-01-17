#include <iostream>

using namespace std;

int main()
{
	struct NODE
	{
		int x;
		int y;
	};

	NODE ta, tb;

	cin >> ta.x >> tb.x;

	ta.y = ta.x + 5;
	tb.y = tb.x - 5;

	cout << "ta.x=" << ta.x << endl;
	cout << "ta.y=" << ta.y << endl;
	cout << "tb.x=" << tb.x << endl;
	cout << "tb.y=" << tb.y;

	return 0;
}