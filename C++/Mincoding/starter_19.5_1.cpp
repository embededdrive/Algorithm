#include <iostream>

using namespace std;

void BBQ(int* a, int* b)
{
	int input[5], min, max;
	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
	}

	min = input[0];
	max = input[0];
	for (int i = 1; i < 5; i++)
	{
		if (min > input[i])
		{
			min = input[i];
		}
		if (max < input[i])
		{
			max = input[i];
		}
	}

	*a = max;
	*b = min;
}

int main()
{
	int a, b;

	BBQ(&a, &b);

	cout << "a=" << a << '\n';
	cout << "b=" << b << '\n';

	return 0;
}