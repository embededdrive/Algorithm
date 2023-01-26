#include <iostream>

using namespace std;

bool isExist(char arr[4], char ch)
{
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == ch)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	char arr[4] = { 'M', 'T', 'K', 'C' }, ch;

	cin >> ch;

	if (isExist(arr, ch))
	{
		cout << "발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}