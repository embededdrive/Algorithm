#include <iostream>

using namespace std;

int main()
{
	char arr[3][5], ch;

	cin >> ch;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = (char)(ch++);
		}
	}

	cout << (char)(arr[2][2] - 'A' + 'a');

	return 0;
}