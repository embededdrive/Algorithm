#include <iostream>

using namespace std;

int main()
{
	char ch;

	cin >> ch;

	if (ch >= 'a' && ch <= 'z')
	{
		cout << "소문자입력!!";
	}
	else if (ch >= 'A' && ch <= 'Z') {
		cout << "대문자입력!!";
	}
	else if (ch >= '0' && ch <= '9') {
		cout << "숫자문자입력!!";
	}

	return 0;
}