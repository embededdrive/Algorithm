#include <iostream>

using namespace std;

int main()
{
	struct Mart
	{
		int str;
		int mel;
		int wat;
	};

	char ch;

	Mart A = { 300, 500, 1000 }, B = { 450, 450, 900 }, C = { 200, 150, 700 };

	cin >> ch;

	if (ch == 'A')
	{
		cout << (A.str + A.mel + A.wat) / 3;
	}
	else if (ch == 'B')
	{
		cout << (B.str + B.mel + B.wat) / 3;
	}
	else if (ch == 'C')
	{
		cout << (C.str + C.mel + C.wat) / 3;
	}

	return 0;
}