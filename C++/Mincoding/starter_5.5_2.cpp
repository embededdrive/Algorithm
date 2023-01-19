#include <iostream>

using namespace std;

void KFC()
{
	cout << "KFC\n";
}

void BBQ()
{
	cout << "BBQ";
}

int main()
{
	char ch;
	cin >> ch;

	if (ch == 'B')
	{
		KFC();
		BBQ();
	}
	else if (ch == 'b')
	{
		BBQ();
	}
	else if (ch == '7')
	{
		KFC();
	}

	return 0;
}