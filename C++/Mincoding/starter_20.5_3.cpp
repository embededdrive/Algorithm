#include <iostream>

using namespace std;

int main()
{
	char ch[11];
	int len, mid;
	bool isSame = true;

	cin >> ch;

	for (int i = 0; i < 11; i++)
	{
		if (ch[i] == '\0')
		{
			len = i;
			break;
		}
	}

	mid = len / 2;

	if (mid * 2 != len)
	{
		isSame = false;
	}

	for (int i = 0; i < mid; i++)
	{
		if (ch[i] != ch[i + mid])
		{
			isSame = false;
			break;
		}
	}

	if (isSame)
	{
		cout << "동일한문장";
	}
	else {
		cout << "다른문장";
	}

	return 0;
}