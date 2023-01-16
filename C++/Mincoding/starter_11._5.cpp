#include <iostream>

using namespace std;

int main()
{
	int a, b, temp;

	cin >> a >> b;

	int* p = &a, * t = &b;

	temp = *p;

	*p = *t;
	*t = temp;

	cout << *p << ' ' << *t;

	return 0;
}