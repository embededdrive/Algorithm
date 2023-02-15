#include <iostream>

using namespace std;

int main()
{
	char vect[7] = { "BTKIGZ" }, target[4];
	int cnt = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> target[i];
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (vect[i] == target[j])
			{
				cnt++;
				break;
			}
		}
	}

	cout << cnt;

	return 0;
}