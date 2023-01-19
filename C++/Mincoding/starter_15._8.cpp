#include <iostream>

using namespace std;

int getlength(char arr[11])
{
	int num = 0;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			num = i;
			break;
		}
	}

	return num;
}

int main()
{
	char arr[5][11];
	int length[5], idx = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		length[i] = getlength(arr[i]);
		
	}

	for (int i = 0; i < 5; i++)
	{
		if (length[i] > length[idx])
		{
			idx = i;
		}
	}

	for (int i = 0; i < length[idx]; i++)
	{
		cout << arr[idx][i];
	}

	return 0;
}