#include <iostream>

using namespace std;

int a, b;

void run(int lev)
{
	cout << lev << ' ';
	if (lev == b)
	{
		return;
	}
	run(lev + 1);
	cout << lev << ' ';
}

int main()
{
	cin >> a >> b;

	run(a);

	return 0;
}