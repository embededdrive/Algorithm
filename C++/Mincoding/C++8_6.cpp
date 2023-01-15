#include <iostream>

using namespace std;

int arr[3][4];

void input()
{
	int num;
	cin >> num;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = num++;
		}
	}
}

void process()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j]++;
		}
	}
}

void output()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

int main()
{
	input();
	process();
	output();

	return 0;
}