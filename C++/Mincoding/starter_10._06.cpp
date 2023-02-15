#include <iostream>

using namespace std;

void printData(int data)
{
	cout << data << endl;
}

void even(int num)
{
	printData(num * 2);
}

void odd(int num)
{
	printData(num - 10);
}

int main()
{
	int a, b;

	cin >> a >> b;

	if ((a / b) % 2 == 0)
	{
		even(a / b);
	}
	else {
		odd(a / b);
	}

	printData(a + b);

	return 0;
}