#include <iostream>

using namespace std;

int main()
{
	string arr[4];
	int longIdx = 0, shortIdx = 0, len[4], max, min;

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++) len[i] = arr[i].length();

	max = len[0];
	min = len[0];
	for (int i = 0; i < 4; i++)
	{
		if (max < len[i])
		{
			max = len[i];
			longIdx = i;
		}
		if (min > len[i])
		{
			min = len[i];
			shortIdx = i;
		}
	}
	cout << "긴문장:" << longIdx << '\n';
	cout << "짧은문장:" << shortIdx;

	return 0;
}