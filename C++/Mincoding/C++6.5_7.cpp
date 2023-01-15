#include <iostream>

using namespace std;

int main()
{
	char a, b;

	cin >> a >> b;

	if (a >= 'a' && a <= 'z') {
		a = a - 'a' + 'A';
	}
	else if (a >= 'A' && a <= 'Z') {
		a = a - 'A' + 'a';
	}

	if (b >= 'a' && b <= 'z') {
		b = b - 'a' + 'A';
	}
	else if (b >= 'A' && b <= 'Z') {
		b = b - 'A' + 'a';
	}

	cout << a << ' ' << b;

	return 0;
}