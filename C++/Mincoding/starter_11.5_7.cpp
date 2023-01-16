#include <iostream>

using namespace std;

char arr[3][3] = {
	'a', 'b', 'd',
	'e', 'w', 'z',
	'q', 'v', 'a'
};

void Process(char get)
{
	char lower;
	lower = get - 'A' + 'a';

	bool Flag = false;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == lower)
			{
				Flag = true;
				break;
			}
		}
		if (Flag)
		{
			break;
		}
	}
	
	if (Flag)
	{
		cout << "존재";
	}
	else {
		cout << "없음";
	}
}

void Input()
{
	char ch;

	cin >> ch;

	Process(ch);
}

int main()
{
	Input();

	return 0;
}