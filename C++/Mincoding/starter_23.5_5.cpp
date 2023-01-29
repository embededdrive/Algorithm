#include <iostream>

using namespace std;

int main()
{
	int num[8], pivot, a = 1, b = 7;

	for (int i = 0; i < 8; i++)
	{
		cin >> num[i];
	}

	pivot = num[0];

	while (true)
	{
		for (int i = a; i <= 7; i++)
		{
			if (num[i] > pivot)
			{
				a = i;
				break;
			}
			if (i == 7)
			{
				a = 7;
			}
		}

		for (int i = b; i >= 0; i--)
		{
			if (num[i] < pivot)
			{
				b = i;
				break;
			}
			if (i == 0)
			{
				b = 0;
			}
		}

		if (b > a)
		{
			swap(num[a], num[b]);
		}
		else break;
	}
	swap(num[0], num[b]);

	for (int i = 0; i < 8; i++)
	{
		cout << num[i] << ' ';
	}

	return 0;
}