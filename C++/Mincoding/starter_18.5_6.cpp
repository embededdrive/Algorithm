#include <iostream>

using namespace std;

int main()
{
	int win[2][3] = {
		3, 5, 1,
		4, 2, 6
	}, people[4], DAT[10] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		cin >> people[i];
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			DAT[win[i][j]]++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << people[i] << "번 ";
		if (DAT[people[i]] == 0)
		{
			cout << "불합격\n";
		}
		else {
			cout << "합격\n";
		}
		
	}

	return 0;
}