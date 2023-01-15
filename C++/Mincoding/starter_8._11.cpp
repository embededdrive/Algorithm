#include <iostream>

using namespace std;

void starBox()
{
	for (int i = 1; i <= 20; i++)
	{
		if (i % 2 == 1) {
			cout << i << ' ';
		}
	}
}

void macDoll()
{
	for (char i = 'H'; i >= 'A'; i--)
	{
		cout << i << ' ';
	}
}

void copyBean()
{
	for (int i = -5; i <= 5; i++)
	{
		cout << i << ' ';
	}
}

int main()
{
	int num;

	cin >> num;

	if (num >= 3500 && num <= 5000)
	{
		starBox();
	}
	else if (num >= 2500 && num < 3500) {
		macDoll();
	}
	else {
		copyBean();
	}

	return 0;
}