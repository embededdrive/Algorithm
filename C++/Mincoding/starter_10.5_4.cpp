#include <iostream>

using namespace std;

char arr[3][5] = {
	{'D', 'A', 'C', 'C', 'D'},
	{'S', 'D', 'F', 'A', 'E'},
	{'E', 'E', 'T', 'F', 'H'}
};

int CHECK(char ch)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == ch)
			{
				return 1;
			}
		}
	}
	return 0;
}

void INPUT()
{
	char ch;
	int ret;
	cin >> ch;

	ret = CHECK(ch);
	if (ret == 1)
	{
		cout << "있음";
	}
	else if (ret == 0) {
		cout << "없음";
	}
}

int main()
{
	INPUT();

	return 0;
}