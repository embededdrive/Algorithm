#include <iostream>

using namespace std;

int main()
{
	int train[8] = { 3, 7, 6, 4, 2, 9, 1, 7 }, team[3], dat[8] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		cin >> team[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if (train[i] == team[0] || train[i] == team[1] || train[i] == team[2])
		{
			dat[i]++;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (dat[i] == 1 && dat[i + 1] == 1 && dat[i+2]==1)
		{
			cout << i << "번~" << i + 2 << "번 칸";
		}
	}

	return 0;
}