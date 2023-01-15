#include <iostream>

using namespace std;

int main()
{
	char arr[5][3] = {
		{'D', 'A', 'A'},
		{'B', 'C', 'D'},
		{'E', 'F', 'A'},
		{'A', 'A', 'D'},
		{'F', 'G', 'E'}
	}, ch;

	cin >> ch;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ch)
			{
				cout << "(" << i << "," << j << ")" << endl;
			}
		}
	}

	return 0;
}