#include <iostream>

using namespace std;

int main()
{
	int a, b, i;

	cin >> a >> b;

	i = a;

	while (i <= b)
	{
		cout << i++ << ' ';
	}

	return 0;
}