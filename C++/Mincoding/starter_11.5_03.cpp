#include <iostream>

using namespace std;

int main()
{
	char arr[8] = { 'A', '1', '1', '1', '5', 'A', 'w', 'z' }, ch;
	int num = 0;

	cin >> ch;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == ch)
		{
			num++;
		}
	}

	if (num >= 3)
	{
		cout << "THREE";
	}
	else if (num == 2) {
		cout << "TWO";
	}
	else if (num == 1) {
		cout << "ONE";
	}
	else if (num == 0) {
		cout << "NOTHING";
	}

	return 0;
}