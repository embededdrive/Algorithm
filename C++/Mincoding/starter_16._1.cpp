#include <iostream>

using namespace std;

int getLength(char arr[10])
{
	int idx = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == '\0')
		{
			idx = i;
			break;
		}
	}
	return idx;
}

int main()
{
	char mat[3][10];

	for (int i = 0; i < 3; i++)
	{
		cin >> mat[i];
	}

	cout << mat[0][getLength(mat[0]) - 1] << mat[1][getLength(mat[1]) - 1] << mat[2][getLength(mat[2]) - 1];

	return 0;
}