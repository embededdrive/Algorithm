#include <iostream>

using namespace std;

int main()
{
	char arr[3][6] = {
		"POTIO",
		"ABCDE",
		"YOURE"
	};

	int a, b;

	cin >> a >> b;

	for (int i = 0; i < 3; i++)
	{
		for (int j = a; j <= b; j++)
		{
			cout << arr[i][j];
		}
	}

	return 0;
}