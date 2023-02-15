#include <iostream>

using namespace std;

int main()
{
	struct Data
	{
		int x;
		int y;
		int z;
	};

	Data a, b;

	cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z;

	cout << a.x + b.x << '\n' << a.y + b.y << '\n' << a.z + b.z;

	return 0;
}