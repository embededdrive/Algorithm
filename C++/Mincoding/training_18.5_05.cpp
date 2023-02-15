#include <iostream>

using namespace std;

int main()
{
	char arr[10] = {
		"ATKPTCABC"
	}, a, b;
	int idxa, idxb;

	cin >> a >> b;

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] == a)
		{
			idxa = i;
			break;
		}
		
	}

	for (int i = 8; i >= 0; i--)
	{
		if (arr[i] == b)
		{
			idxb = i;
			break;
		}
	}

	cout << idxb - idxa;

	return 0;
}