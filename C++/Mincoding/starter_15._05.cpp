#include <iostream>

using namespace std;

int getLength(char arr[7])
{
	int num;
	for (int i = 0; i < 7; i++)
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
	char arr[4][7];
	int len[4], temp;

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

	for (int i = 0; i < 4; i++)
	{
		len[i] = getLength(arr[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (len[i] > len[j])
			{
				temp = len[i];
				len[i] = len[j];
				len[j] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << len[i] << ' ';
	}

	return 0;
}