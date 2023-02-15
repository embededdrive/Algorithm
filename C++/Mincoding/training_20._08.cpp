#include <iostream>

using namespace std;

void run(int lev)
{
	if (lev == 0) return;
	run(lev / 2);
	cout << lev << ' ';
}

int main()
{
	int num;

	cin >> num;

	run(num);

	return 0;
}