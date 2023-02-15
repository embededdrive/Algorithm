#include <iostream>

using namespace std;

int main()
{
	char a, b , *pa, *pb, temp;
	
	cin >> a >> b;

	pa = &a;
	pb = &b;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

	cout << *pa << ' ' << *pb;

	return 0;
}