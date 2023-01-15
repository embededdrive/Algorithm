#include <iostream>

using namespace std;

int chicken()
{
	int num;
	cin >> num;
	return num + 10;
}

char coke()
{
	char ch;
	cin >> ch;
	return ch;
}

void KFC()
{
	int a;
	char b;

	a = chicken();
	b = coke();

	cout << a << b;
}

int main()
{
	KFC();

	return 0;
}