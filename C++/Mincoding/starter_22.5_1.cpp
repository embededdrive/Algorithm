#include <iostream>

using namespace std;

int main()
{
	char arr[2][2][4] = {
		{{"ATB"},{"CCB"}},
		{{"AAA"},{"BBC"}}
	}, ch;
	bool isFound = false;

	cin >> ch;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (arr[i][j][k] == ch)
				{
					isFound = true;
					break;
				}
			}
			if (isFound) break;
		}
		if (isFound) break;
	}

	if (isFound) cout << "발견";
	else cout << "미발견";

	return 0;
}