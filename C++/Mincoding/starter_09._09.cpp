#include <iostream>

using namespace std;

char arr[2][3] = {
	{'F', 'E', 'W'},
	{'D', 'C', 'A'}
};

void findCh(char target)
{
	bool hasTarget = false;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == target)
			{
				hasTarget = true;
			}
		}
	}

	if (hasTarget)
	{
		cout << "발견";
	}
	else {
		cout << "미발견";
	}
}

int main()
{
	char ch;

	cin >> ch;

	findCh(ch);

	return 0;
}