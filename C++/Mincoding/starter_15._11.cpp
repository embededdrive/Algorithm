#include <iostream>

using namespace std;

int main()
{
	char arr[4][6];
	bool hasA = false, hasB = false;

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] == 'A')
			{
				hasA = true;
			}
			if (arr[i][j] == 'B')
			{
				hasB = true;
			}
		}
	}

	if (hasA && hasB)
	{
		cout << "대발견";
	}
	else if (hasA || hasB)
	{
		cout << "중발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}