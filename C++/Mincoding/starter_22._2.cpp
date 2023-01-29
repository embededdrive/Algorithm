#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char arr[3][11];
	int a, b, c;

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	a = strcmp(arr[0], arr[1]);
	b = strcmp(arr[0], arr[2]);
	c = strcmp(arr[1], arr[2]);

	if (a == 0 && b == 0)
	{
		cout << "WOW";
	}
	else if (a == 0 || b == 0 || c == 0) {
		cout << "GOOD";
	}
	else {
		cout << "BAD";
	}

	return 0;
}