#include <iostream>

using namespace std;

char getChar()
{
	char a, b;

	cin >> a >> b;

	if (a > b)
	{
		return a;
	}
	else {
		return b;
	}
}

int main()
{
	char ch;

	ch = getChar();

	cout << ch;

	return 0;
}