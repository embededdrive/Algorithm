#include <iostream>

using namespace std;

int main()
{
	char mat[2][7] = {
		"A79TKQ",
		"MINCOD"
	}, a, b;

	cin >> a >> b;

	int hasIt[255] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (mat[i][j] == a)
			{
				hasIt[a] = 1;
			}
			if (mat[i][j] == b)
			{
				hasIt[b] = 1;
			}
		}
	}
	
	if (hasIt[a])
	{
		cout << a << " : 존재";
	}
	else {
		cout << a << " : 없음";
	}
	cout << '\n';
	if (hasIt[b])
	{
		cout << b << " : 존재";
	}
	else {
		cout << b << " : 없음";
	}

	return 0;
}