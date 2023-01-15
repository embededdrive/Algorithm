#include <iostream>

using namespace std;

int main()
{
	char ch;
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z')
	{
		cout << "대문자입니다";
	}
	if (ch >= 'a' && ch <= 'z')
	{
		cout << "소문자입니다";
	}

	return 0;
}