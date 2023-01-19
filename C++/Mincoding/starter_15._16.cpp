#include <iostream>

using namespace std;

int main()
{
	char arr[3][3], ch;
	int a = 2, b = 0, num = 0;

	cin >> ch;

	while (a >= 0)
	{
		b = 0;
		while (b <= 2)
		{
			if (2 - a >= b)
			{
				arr[a][b] = (char)(ch + num++);
			}
			else {
				arr[a][b] = ' ';
			}
			b++;
		}
		a--;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}