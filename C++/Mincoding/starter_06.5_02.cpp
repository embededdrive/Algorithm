#include <iostream>

using namespace std;

int main()
{
	char ch;

	cin >> ch;

	for (char i = ch; i >= 'a'; i--)
	{
		cout << i;
	}

	return 0;
}