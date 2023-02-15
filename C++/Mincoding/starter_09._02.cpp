#include <iostream>

using namespace std;

int main()
{
	char arr[3][5] = { {'A', 'B', 'C', 'D', 'E'}, {'E', 'A', 'B', 'A', 'B'}, {'A', 'C', 'D', 'E', 'R'} }, ch;
	int num = 0;

	cin >> ch;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == ch)
			{
				num++;
			}
		}
	}
	
	if (num >= 3)
	{
		cout << "대발견";
	}
	else if (num >= 1) {
		cout << "발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}