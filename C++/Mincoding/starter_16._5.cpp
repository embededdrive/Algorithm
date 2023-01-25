#include <iostream>

using namespace std;

int main()
{
	char arr[8];
	int num, len = 0;

	cin >> arr >> num;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = num; i < len; i++)
	{
		arr[i] = arr[i + 1];
	}

	cout << arr;

	return 0;
}