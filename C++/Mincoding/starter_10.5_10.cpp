#include <iostream>

using namespace std;

int arr[7][5] = {
	{1, 0, 0, 0, 0},
	{1, 0, 1, 0, 0},
	{1, 1, 0, 1, 0},
	{1, 0, 1, 0, 0},
	{0, 1, 0, 0, 1},
	{0, 0, 0, 1, 0},
	{1, 1, 0, 0, 0}
};

void OUTPUT(int num)
{
	cout << num;
}

int PROCESS(int num)
{
	int count = 0;

	for (int i = 0; i < 7; i++)
	{
		if (arr[i][num] == 1)
		{
			count++;
		}
	}

	return count;
}

int INPUT()
{
	int num;
	cin >> num;
	return num;
}

int main()
{
	OUTPUT(PROCESS(INPUT()));

	return 0;
}