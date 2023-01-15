#include <iostream>

using namespace std;

char arr[2][3];

void input()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void findUpper()
{
	int num = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] >= 'A' && arr[i][j] <= 'Z') num++;
		}
	}
	cout << "대문자" << num << "개" << endl;
}

void findLower()
{
	int num = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] >= 'a' && arr[i][j] <= 'z') num++;
		}
	}

	cout << "소문자" << num << "개";
}

int main()
{
	input();
	findUpper();
	findLower();

	return 0;
}