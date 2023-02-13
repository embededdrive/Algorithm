#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string str[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i < 5; i++)
	{
		char temp = str[i][1];
		str[i][1] = str[i][3];
		str[i][3] = temp;
	}

	char compare[6] = "MAPOM";
	char eachCh[6];
	eachCh[5] = '\0';
	bool isFound = false;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			eachCh[j] = str[i][j];
		}

		if (strcmp(eachCh, compare) == 0)
		{
			isFound = true;
			break;
		}
	}

	if (isFound)
	{
		cout << "yes";
	}
	else {
		cout << "no";
	}

	return 0;
}