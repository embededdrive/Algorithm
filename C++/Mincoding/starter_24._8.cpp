#include <iostream>

using namespace std;

int main()
{
	string pop, section;
	int a, b, c;

	cin >> pop >> a >> b >> c;

	section = pop.substr(a, b - a + 1);

	for (int i = 0; i < c; i++)
	{
		cout << section;
	}

	return 0;
}