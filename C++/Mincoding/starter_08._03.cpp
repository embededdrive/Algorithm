#include <iostream>

using namespace std;

int a, b;

void input()
{
	cin >> a >> b;
}

void output()
{
	int num = 5;
	while (num <= a + b)
	{
		cout << num++ << ' ';
	}
}

int main()
{
	input();
	output();

	return 0;
}