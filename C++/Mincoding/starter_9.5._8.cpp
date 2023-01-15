#include <iostream>

using namespace std;

void BBQ(int num)
{
	for (int i = 1; i <= num; i++)
	{
		cout << i;
	}
}

void KFC(char ch)
{
	for (int i = 0; i < 7; i++)
	{
		cout << ch;
	}
}

int main()
{
	int num1, num2;
	char ch;

	cin >> num1;

	if (num1 % 2 == 1)
	{
		cin >> num2;
		BBQ(num2);
	}
	else {
		cin >> ch;
		KFC(ch);
	}

	return 0;
}