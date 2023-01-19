#include <iostream>

using namespace std;

int countCh(char sen[9], char ch)
{
	int cnt = 0;
	for (int i = 0; i < 9; i++)
	{
		if (sen[i] == '\0')
		{
			break;
		}
		else {
			if (sen[i] == ch)
			{
				cnt++;
			}
		}
	}

	return cnt;
}

int main()
{
	char arr[3][9] = {
		"BBQWORLD",
		"KFCAPPLE",
		"LOT"
	}, ch;

	int num = 0;

	cin >> ch;

	for (int i = 0; i < 3; i++)
	{
		num += countCh(arr[i], ch);
	}

	cout << num;

	return 0;
}