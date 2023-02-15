#include <iostream>

using namespace std;

int main()
{
	char arr[3][3], ch;
	int num = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = (char)('A' + num++);
		}
	}

	int y1, x1, y2, x2;

	cin >> y1 >> x1 >> y2 >> x2;

	ch = arr[y1][x1];
	arr[y1][x1] = arr[y2][x2];
	arr[y2][x2] = ch;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}