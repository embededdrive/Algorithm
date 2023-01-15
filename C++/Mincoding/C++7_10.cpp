#include <iostream>

using namespace std;

char arr[4][4];
char ch;

void input()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = ch;
		}
	}
}

void output()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}

int main()
{
	cin >> ch;

	input();
	output();

	return 0;
}