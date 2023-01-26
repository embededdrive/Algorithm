#include <iostream>

using namespace std;

int arr[5][3] = {
	15, 18, 17,
	4, 6, 9,
	10, 1, 3,
	7, 8, 9,
	15, 2, 6
}, family[3];

int isPattern(int y)
{
	for (int i = 0; i < 3; i++)
	{
		if (family[i] != arr[y][i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> family[i];
	}

	for (int i = 0; i < 5; i++)
	{
		int ret = isPattern(i);
		if (ret == 1)
		{
			cout << 5 - i << "층";
			break;
		}
	}

	return 0;
}