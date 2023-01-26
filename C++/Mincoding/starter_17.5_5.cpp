#include <iostream>

using namespace std;

int main()
{
	int bit[7], vect[7] = {
		3, 5, 4, 2, 6, 6, 5
	};

	for (int i = 0; i < 7; i++)
	{
		cin >> bit[i];
	}
	
	for (int i = 0; i < 7; i++)
	{
		vect[i] = bit[i] * vect[i];
	}

	for (int i = 0; i < 7; i++)
	{
		if (vect[i] != 0)
		{
			vect[i] = 7;
		}
		cout << vect[i];
	}

	return 0;
}