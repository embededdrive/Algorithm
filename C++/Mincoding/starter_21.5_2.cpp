#include <iostream>
#include<cstring>

using namespace std;

int main()
{
	int mat[3][4] = {
		3, 4, 1, 5,
		3, 4, 1, 3,
		5, 2, 3, 6
	}, sum[4], index;

	for (int i = 0; i < 4; i++)
	{
		sum[i] = mat[0][i] + mat[1][i] + mat[2][i];

	}

	cin >> index;

	cout << sum[index];

	return 0;
}