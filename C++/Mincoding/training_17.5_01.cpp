#include <iostream>

using namespace std;

int arr[11] = { 3, 4, 1, 1, 2, 6, 8, 7, 8, 9, 10 };

int getSum(int index)
{
	int sum = 0, cnt = 0;

	for (int i = index; i < 11; i++)
	{
		sum += arr[i];
		cnt++;
		if (cnt == 5)
		{
			break;
		}
	}

	return sum;
}

int main()
{
	int startIndex;

	cin >> startIndex;

	cout << getSum(startIndex);

	return 0;
}