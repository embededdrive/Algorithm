#include <iostream>

using namespace std;

char arr[11], ghost[6] = "GHOST";

bool isExist(char idx) {
	for (int i = 0; i < 5; i++)
	{
		if (ghost[i] != arr[i + idx])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int len;
	bool found = false;

	cin >> arr;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = 0; i < len - 4; i++)
	{
		if (isExist(i))
		{
			found = true;
			break;
		}
	}

	if (found)
	{
		cout << "존재";
	}
	else {
		cout << "존재하지 않음";
	}

	return 0;
}