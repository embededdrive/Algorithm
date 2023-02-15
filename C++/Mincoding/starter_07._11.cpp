#include <iostream>

using namespace std;

int num, arr[3][3];

void input()
{
	cin >> num;
}

void process()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = num++;
		}
	}
}

void output()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
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