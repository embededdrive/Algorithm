#include <iostream>

using namespace std;

int main()
{
	char arr[2][3] = {
		'G', 'K', 'G',
		'\0', '\0','\0'
	};
	bool isExist = false;
	int dat[256] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[1][i];
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			dat[arr[i][j]]++;
		}
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (dat[i] >= 3)
		{
			isExist = true;
			break;
		}
	}

	if (isExist)
	{
		cout << "있음";
	}
	else {
		cout << "없음";
	}

	return 0;
}