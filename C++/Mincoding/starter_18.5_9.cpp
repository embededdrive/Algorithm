#include <iostream>

using namespace std;

int main()
{
	char arr[11];
	int DAT[256] = { 0 };

	cin >> arr;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			break;
		}
		else {
			DAT[arr[i]]++;
		}
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (DAT[i] != 0)
		{
			cout << i;
		}
	}

	return 0;
}