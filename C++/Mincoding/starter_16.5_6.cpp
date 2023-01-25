#include <iostream>

using namespace std;

int maxindex(char arr[11], int len) {
	
	char max = arr[0];
	int idx = 0;
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			idx = i;
		}
	}

	return idx;
}

int minindex(char arr[11], int len) {

	char min = arr[0];
	int idx = 0;
	for (int i = 1; i < len; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			idx = i;
		}
	}

	return idx;
}

int main()
{
	char arr[11];
	int maxIndex, minIndex, len;

	cin >> arr;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	maxIndex = maxindex(arr, len);
	minIndex = minindex(arr, len);

	cout << maxIndex << '\n' << minIndex;

	return 0;
}