#include <iostream>

using namespace std;

int main()
{
	char arr[5][4] = {
		"ABC",
		"AGH",
		"HIJ",
		"KAB",
		"ABC"
	};
	int dat[256] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			dat[arr[i][j]]++;
		}
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (dat[i] != 0)
		{
			for (int j = 0; j < dat[i]; j++)
			{
				cout << i;
			}
		}
	}

	return 0;
}