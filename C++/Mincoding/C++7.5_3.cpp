#include <iostream>

using namespace std;


char a, b;

void input()
{
	cin >> a >> b;
}

void output()
{
	if (a >= 'A' && a <= 'Z' && b >= 'A' && b <= 'Z')
	{
		cout << "대문자들";
	}
	else if (a >= 'A' && a <= 'Z' || b >= 'A' && b <= 'Z') {
		cout << "대소문자";
	}
	else {
		for (char i = 'a'; i <= 'z'; i++)
		{
			cout << i;
		}
	}
}

int main()
{
	input();
	output();

	return 0;
}