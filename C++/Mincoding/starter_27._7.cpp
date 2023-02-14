#include <iostream>

using namespace std;

int number[6];
int used[6];

int getMax() {
	int idx;
	int maxNum = -2e+09;

	for (int i = 0; i < 6; i++)
	{
		if (number[i] > maxNum && used[i] == 0)
		{
			maxNum = number[i];
			idx = i;
		}
	}

	used[idx] = 1;
	return maxNum;
}

int getMin() {
	int idx;
	int minNum = 2e+09;

	for (int i = 0; i < 6; i++)
	{
		if (number[i] < minNum && used[i] == 0)
		{
			minNum = number[i];
			idx = i;
		}
	}

	used[idx] = 1;
	return minNum;
}

int main()
{
	char command[7];

	for (int i = 0; i < 6; i++)
	{
		cin >> number[i];
	}

	cin >> command;

	for (int i = 0; i < 6; i++)
	{
		if (command[i] == 'm')
		{
			cout << getMin();
		}
		else if (command[i] == 'x') {
			cout << getMax();
		}
	}

	return 0;
}