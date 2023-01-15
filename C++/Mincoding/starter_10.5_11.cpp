#include <iostream>

using namespace std;

void run(int receive)
{
	int arr[3][3], num = 1;

	if (receive < 10)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = num++;
			}
		}
	}
	else {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr[i][j] = num++;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}

int main()
{
	int num;
	cin >> num;

	run(num);

	return 0;
}