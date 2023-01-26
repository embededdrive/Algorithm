#include <iostream>

using namespace std;

void bbq(int lev)
{
	if (lev == 0)
	{
		cout << '0' << ' ';
		return;
	}

	cout << lev << ' ';
	bbq(lev - 1);
	cout << lev << ' ';
}

int main()
{
	int num;

	cin >> num;

	bbq(num);

	return 0;
}