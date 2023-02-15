#include <iostream>

using namespace std;

int main()
{
	int up[5], down[5], num = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> up[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> down[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (up[i] == 1 && down[i] == 1)
		{
			num++;
		}
	}

	cout << num << "개";

	return 0;
}