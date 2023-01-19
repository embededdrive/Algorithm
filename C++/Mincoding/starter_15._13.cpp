#include <iostream>

using namespace std;

void arrange(char arr[6], int len)
{
	char temp;

	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	char arr[2][6] = {
		"DATAW",
		"BBQK"
	};

	int num, len[2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] == '\0')
			{
				len[i] = j;
				break;
			}
		}
	}

	cin >> num;

	if (num % 2 == 1)
	{
		arrange(arr[0], len[0]);
	}
	else {
		arrange(arr[1], len[1]);
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < len[i]; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}