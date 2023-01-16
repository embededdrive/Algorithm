#include <iostream>

using namespace std;

void print(int a, int b)
{
	cout << "합:" << a << endl;
	cout << "차:" << b;
}

int sum(int a, int b)
{
	return a + b;
}

int comp(int a, int b)
{
	return a - b;
}

int main()
{
	int a, b, s, c;

	cin >> a >> b;
	s = sum(a, b);
	c = comp(a, b);
	print(s, c);

	return 0;
}