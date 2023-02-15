#include <iostream>
#include <string>

using namespace std;

int main()
{
	int mat[5][5] = {
		0, 0, 1, 0, 0,
		0, 0, 1, 0, 0,
		0, 0, 0, 1, 0,
		0, 0, 0, 0, 1,
		0, 0, 0, 0, 0
	};
	string names[5] = { "Chloe", "Diane", "Bob", "Amy", "Edger" };

	int maxIdx = 0, max = 0;

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			sum += mat[j][i];
		}
		if (sum > max)
		{
			max = sum;
			maxIdx = i;
		}
	}

	cout << names[maxIdx];

	return 0;
}