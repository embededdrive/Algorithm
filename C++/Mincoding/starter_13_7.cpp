#include <iostream>

using namespace std;

char arr[3][3] = {
	'A', 'D', 'F',
	'Q', 'W', 'E',
	'Z', 'X', 'C'
};

void find(char ch, int* y, int* x)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ch)
			{
				*y = i;
				*x = j;
				return;
			}
		}
	}
}

int main()
{
	char ch;
	int y, x;

	cin >> ch;

	find(ch, &y, &x);

	cout << y << ',' << x;

	return 0;
}