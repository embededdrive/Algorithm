#include <iostream>

using namespace std;

int main()
{
	int cost, cnt = 0;

	cin >> cost;

	while (cost >= 500)
	{
		cost -= 500;
		cnt++;
	}
	while (cost >= 100)
	{
		cost -= 100;
		cnt++;
	}
	while (cost >= 50)
	{
		cost -= 50;
		cnt++;
	}
	while (cost >= 10)
	{
		cost -= 10;
		cnt++;
	}

	cout << cnt;

	return 0;
}