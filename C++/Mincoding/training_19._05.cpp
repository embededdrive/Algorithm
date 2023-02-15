#include <iostream>

using namespace std;

int getLength(char name[8])
{
	for (int i = 0; i < 8; i++)
	{
		if (name[i] == '\0')
		{
			return i;
		}
	}
}

int main()
{
	struct MC
	{
		char burger1[8];
		char burger2[8];
	};

	MC bob, tom;

	cin >> bob.burger1 >> bob.burger2 >> tom.burger1 >> tom.burger2;

	cout << "bob.burger1=" << getLength(bob.burger1) << '\n';
	cout << "bob.burger2=" << getLength(bob.burger2) << '\n';
	cout << "tom.burger1=" << getLength(tom.burger1) << '\n';
	cout << "tom.burger2=" << getLength(tom.burger2);

	return 0;
}