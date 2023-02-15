#include <iostream>

using namespace std;

int main()
{
	int a, b;
	char ch;

	cin >> a >> b >> ch;

	for (int k = 0; k < 2; k++)
	{
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				cout << ch;
			}
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}