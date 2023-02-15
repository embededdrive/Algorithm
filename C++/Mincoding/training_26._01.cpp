#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, min = 200, max = 0, minidx, maxidx;
	int* simData[5] = { &a, &b, &c, &d, &e };

	for (int i = 0; i < 5; i++)
	{
		cin >> *simData[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (*simData[i] > max)
		{
			maxidx = i;
			max = *simData[i];
		}
		if (*simData[i] < min)
		{
			minidx = i;
			min = *simData[i];
		}
	}
	cout << "MAX:" << max << '\n';
	cout << "MIN:" << min;

	return 0;
}