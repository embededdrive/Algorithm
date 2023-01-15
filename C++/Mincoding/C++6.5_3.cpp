#include <iostream>

using namespace std;

int main()
{
	int a[5], b[5];

	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		a[i] = num;
		b[i] = num;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << b[i] << ' ';
	}

	return 0;
}