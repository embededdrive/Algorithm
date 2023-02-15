#include <iostream>

using namespace std;

int main()
{
	int num, a, b, c, d;

	cin >> num;

	a = num / 1000;
	num = num % 1000;

	b = num / 100;
	num = num % 100;

	c = num / 10;
	num = num % 10;

	d = num;

	cout << "숫자" << a << "\n숫자" << b << "\n숫자" << c << "\n숫자" << d;

	return 0;
}