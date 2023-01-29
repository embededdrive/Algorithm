#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char password[5][11] = {
		"Jason",
		"Dr.tom",
		"EXEXI",
		"GK12P",
		"POW"
	}, input[11];
	bool isCorrect = false;

	cin >> input;

	for (int i = 0; i < 5; i++)
	{
		if (strcmp(password[i], input) == 0)
		{
			isCorrect = true;
			break;
		}
	}

	if (isCorrect)
	{
		cout << "암호해제";
	}
	else {
		cout << "암호틀림";
	}

	return 0;
}