#include <iostream>

using namespace std;

int getLength(char arr[11])
{
	int num;
	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			num = i;
			break;
		}
	}
	return num;
}

int main()
{
	char sen1[11], sen2[11];
	int	len1, len2;
	bool isMirror = true;

	cin >> sen1 >> sen2;

	len1 = getLength(sen1);
	len2 = getLength(sen2);

	if (len1 == len2)
	{
		for (int i = 0; i < len1; i++)
		{
			if (sen1[i] != sen2[len1 - i - 1])
			{
				isMirror = false;
			}
		}
	}
	else {
		isMirror = false;
	}

	if (isMirror)
	{
		cout << "거울문장";
	}
	else {
		cout << "거울문장아님";
	}

	return 0;
}