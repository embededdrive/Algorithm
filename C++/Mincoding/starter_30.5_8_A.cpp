#include <iostream>

using namespace std;

int main()
{
	int isExist[4] = { 1, 1, 1, 1 };
	int n, idx = -1;
	char heros[5] = "BIAH";

	cin >> n;

	for (int i = 0; i < 4; i++)
	{
		for (int j = n; j > 0; j--)
		{
			int temp = idx;
			for (int k = 0; k < 4; k++)
			{
				temp = (temp + 1) % 4;
				if (isExist[temp]) break;
			}
			idx = temp;
		}

		cout << heros[idx] << ' ';
		isExist[idx] = 0;
	}

	return 0;
}