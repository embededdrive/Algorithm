#include <iostream>

using namespace std;

int getLength(char arr[10])
{
	int idx = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == '\0')
		{
			idx = i;
			break;
		}
	}
	return idx;
}

int main()
{
	char arr[3][10];
	int num[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
		num[i] = getLength(arr[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << num[i] << "=" << arr[i] << endl;
	}

	return 0;
}