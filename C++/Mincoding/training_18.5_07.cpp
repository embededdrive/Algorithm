#include <iostream>

using namespace std;

int main()
{
	char vect[10] = {
		"MINCODING"
	}, arr[10];
	int n, DAT[256] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 9; i++)
	{
		DAT[vect[i]]++;
	}
	
	for (int i = 0; i < n; i++)
	{
		if (DAT[arr[i]] != 0)
		{
			cout << "O";
		} else {
			cout << "X";
		}
	}

	return 0;
}