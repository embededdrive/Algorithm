#include <iostream>

using namespace std;

int INPUT()
{
	int num;
	cin >> num;
	return num;
}

void CountDown(int num)
{
	for (int i = num; i >= 1; i--)
	{
		cout << i << ' ';
	}
}

int main()
{
	int num;

	num = INPUT();
	CountDown(num);

	return 0;
}