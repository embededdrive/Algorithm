#include <iostream>

using namespace std;

int pingpong(int tong)
{
	return tong + 10;
}

int main()
{
	int stone, ret;

	cin >> stone;

	ret = pingpong(stone);

	cout << ret;

	return 0;
}