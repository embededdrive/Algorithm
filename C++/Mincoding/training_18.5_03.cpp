#include <iostream>

using namespace std;

int main()
{
	char arr[11], maxch = 'A';
	int dat[256] = { 0 };

	cin >> arr;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			break;
		}
		else {
			dat[arr[i]]++;
		}
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (dat[maxch] < dat[i])
		{
			maxch = i;
		}
	}

	cout << maxch;

	return 0;
}