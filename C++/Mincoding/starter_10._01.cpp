#include <iostream>

using namespace std;

int one()
{
	int num;
	cin >> num;

	return num;
}

char two()
{
	char ch;
	cin >> ch;

	return ch;
}

int main()
{
	int num = one();
	char ch = two();

	cout << num << ch;

	return 0;
}