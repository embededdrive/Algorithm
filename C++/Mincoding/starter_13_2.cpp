#include <iostream>

using namespace std;

void moom(int age, int *a, int* b, int* c)
{
	*a = age - 4;
	*b = age + 3;
	*c = age * 2;
}

int main()
{
	int num, a, b, c;

	cin >> num;

	moom(num, &a, &b, &c);

	cout << a << ' ' << b << ' ' << c;

	return 0;
}