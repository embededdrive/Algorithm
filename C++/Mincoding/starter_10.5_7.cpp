#include <iostream>

using namespace std;

char aToZ()
{
	char ch;
	cin >> ch;
	if (ch - 'A' <= 12)
	{
		return 'A';
	}
	else {
		return 'Z';
	}
}

int main()
{
	cout << aToZ();

	return 0;
}