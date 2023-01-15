#include <iostream>

using namespace std;

int main()
{
	char ch;
	cin >> ch;

	if (ch >= '0' && ch <= '9')
	{
		cout << ch - '0' + 5;
	}

	return 0;
}