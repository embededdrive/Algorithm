#include <iostream>

using namespace std;

int main()
{
	char arr[50], temp;
	int idx, len;

	cin >> arr;

	for (int i = 0; i < 50; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		cout << arr[i];
	}

	return 0;
}