#include <iostream>

using namespace std;

int main()
{
	char a, b, c, *pa, *pb, *pc;
	
	cin >> a >> b >> c;

	pa = &a;
	pb = &b;
	pc = &c;

	if (*pa > *pb && *pa > *pc)
	{
		cout << *pa;
	}
	else if (*pb > *pa && *pb > *pc)
	{
		cout << *pb;
	}
	else {
		cout << *pc;
	}

	return 0;
}