#include <iostream>

using namespace std;

int main()
{
	char arr[6];
	int num, len;

	cin >> arr >> num;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = len; i >= num; i--)
	{
		arr[i + 1] = arr[i];
	}

	arr[num] = 'A';

	for (int i = 0; i < len + 1; i++)
	{
		cout << arr[i];
	}

	return 0;
}