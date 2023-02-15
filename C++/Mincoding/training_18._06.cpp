#include <iostream>

using namespace std;

int main()
{
	char town[3][4] = {
		"CDA",
		"BMZ",
		"QPO"
	}, black[4];
	int DAT[255] = { 0 }, cnt = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> black[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			DAT[town[i][j]]++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		if (DAT[black[i]] != 0)
		{
			cnt++;
		}
	}

	cout << cnt << "명";

	return 0;
}