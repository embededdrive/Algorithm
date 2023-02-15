#include <iostream>

using namespace std;

int main()
{
	char arr[3][5] = {
		'a', 'b', 'a', 'c', 'z',
		'c', 't', 'a', 'c', 'd',
		'c', 'c', 'c', 'c', 'a'
	}, ch;

	int num = 0;

	cin >> ch;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == ch)
			{
				num++;
			}
		}
	}

	if (num >= 7)
	{
		cout << "세상에";
	}
	else if (num >= 5)
	{
		cout << "와우";
	}
	else if (num >= 3)
	{
		cout << "이야";
	}
	else {
		cout << "이런";
	}

	return 0;
}