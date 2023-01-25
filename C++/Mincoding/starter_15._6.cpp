#include <iostream>

using namespace std;

bool isUpper(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return true;
	}
	else {
		return false;
	}
}

bool isLower(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	char sen[11];
	int num;

	bool isFrog = true;

	cin >> sen;

	for (int i = 0; i < 11; i++)
	{
		if (sen[i] == '\0')
		{
			num = i;
			break;
		}
	}

	for (int i = 0; i < num - 1; i++)
	{
		if (isLower(sen[i]) && isLower(sen[i+1]) || isUpper(sen[i]) && isUpper(sen[i+1]))
		{
			isFrog = false;
			break;
		}
	}

	if (isFrog)
	{
		cout << "개구리문장";
	}
	else {
		cout << "일반문장";
	}

	return 0;
}