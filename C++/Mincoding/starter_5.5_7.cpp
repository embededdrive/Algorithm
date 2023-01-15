#include <iostream>

using namespace std;

int main()
{
	int data[4], num;

	cin >> num;

	for (int i = 0; i < 4; i++)
	{
		data[i] = num - i;
	}

	for (int i = 0; i < 4; i++)
	{
		cout << data[i] << ' ';
	}

	return 0;
}