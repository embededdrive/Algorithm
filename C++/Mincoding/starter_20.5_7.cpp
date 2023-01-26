#include <iostream>

using namespace std;

int main()
{
	char arr[11];
	int len;

	cin >> arr;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << arr[j];
		}
		cout << '\n';
	}

	return 0;
}