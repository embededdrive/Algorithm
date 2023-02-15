#include <iostream>

using namespace std;

void getName(char *a, char *b)
{
	cin >> *a >> *b;
}

int main()
{
	char a, b;

	getName(&a, &b);

	if (a <= b)
	{
		cout << a;
	}
	else {
		cout << b;
	}

	return 0;
}