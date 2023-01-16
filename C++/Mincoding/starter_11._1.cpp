#include <iostream>

using namespace std;

void calc(int a, int b, int c)
{
	cout << a + b + c;
}

int input()
{
	int num;

	cin >> num;

	return num;
}

int main()
{
	int a, b, c;

	a = input();
	b = input();
	c = input();

	calc(a, b, c);

	return 0;
}