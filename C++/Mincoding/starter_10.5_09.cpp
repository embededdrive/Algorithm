#include <iostream>

using namespace std;

int main()
{
	struct BBQ {
		int x;
		int data[3];
	};

	BBQ g;

	cin >> g.x >> g.data[0] >> g.data[1] >> g.data[2];

	cout << g.data[0] + g.data[1] + g.data[2] << ' ' << g.x;

	return 0;
}