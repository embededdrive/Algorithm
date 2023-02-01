#include <iostream>

using namespace std;

int main()
{
	int arr[4][5] = { 0, }, sty = 5, stx = 5, eny = 0, enx = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 0) continue;

			if (sty > i) sty = i;
			if (stx > j) stx = j;
			if (eny < i) eny = i;
			if (enx < j) enx = j;
		}
	}

	cout << '(' << sty << ',' << stx << ")\n";
	cout << '(' << eny << ',' << enx << ')';

	return 0;
}