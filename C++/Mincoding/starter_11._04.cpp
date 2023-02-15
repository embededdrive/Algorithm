#include <iostream>

using namespace std;

int main()
{
	char a, b, c;

	cin >> a >> b >> c;

	char* pa, * pb, * pc;

	pa = &a;
	pb = &b;
	pc = &c;

	*pa += 1;
	*pb += 1;
	*pc += 1;

	cout << *pa << ' ' << *pb << ' ' << * pc;

	return 0;
}