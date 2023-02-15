#include <iostream>

using namespace std;

int main()
{
	char sen1[7], sen2[7];
	int num1, num2;
	bool isSame = true;

	cin >> sen1 >> sen2;

	for (int i = 0; i < 7; i++)
	{
		if (sen1[i] == '\0')
		{
			num1 = i;
			break;
		}
	}

	for (int i = 0; i < 7; i++)
	{
		if (sen2[i] == '\0')
		{
			num2 = i;
			break;
		}
	}

	if (num1 != num2)
	{
		isSame = false;
	}
	else {
		for (int i = 0; i < num1; i++)
		{
			if (sen1[i] != sen2[i])
			{
				isSame = false;
			}
		}
	}

	if (isSame)
	{
		cout << "같음";
	}
	else {
		cout << "다름";
	}

	return 0;
}