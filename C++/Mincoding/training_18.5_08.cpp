#include <iostream>

using namespace std;

int main()
{
	char arr[3][10];
	int DAT[256] = { 0 };
	bool duplicated = false;

	
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == '\0')
			{
				break;
			}
			DAT[arr[i][j]]++;
		}
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (DAT[i] > 1)
		{
			duplicated = true;
		}
	}

	if (duplicated)
	{
		cout << "No";
	}
	else {
		cout << "Perfect";
	}

	return 0;
}