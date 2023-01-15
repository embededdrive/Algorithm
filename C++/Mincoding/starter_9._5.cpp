#include <iostream>

using namespace std;

int main()
{
	struct ABC
	{
		int x;
		int y;
	};

	ABC t;

	cin >> t.x >> t.y;

	cout << t.x + t.y;

	return 0;
}