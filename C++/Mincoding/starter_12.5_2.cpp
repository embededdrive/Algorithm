#include <iostream>

using namespace std;

int main()
{
	int a, b;
	char c, d;

	int* p1, * p2;
	char* p3, * p4;

	p1 = &a;
	p2 = &b;
	p3 = &c;
	p4 = &d;

	cin >> *p1 >> *p2 >> *p3 >> *p4;

	for (int i = 0; i < *p1; i++)
	{
		cout << *p3;
	}
	cout << endl;
	for (int i = 0; i < *p2; i++)
	{
		cout << *p4;
	}

	return 0;
}