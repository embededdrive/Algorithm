#include <iostream>

using namespace std;

int main()
{
	char ch;

	cin >> ch;

	for (int i = -3; i <= 3; i++)
	{
		char newch = ch + i;

		if (newch < 'A')
		{
			newch += 26;
		}
		if (newch > 'Z') {
			newch -= 26;
		}
		cout << newch;
	}

	return 0;
}