#include <iostream>

using namespace std;

int main()
{
	int vect[7] = { 3, 5, 1, 1, 2, 3, 2 }, arr[4], num[4] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (vect[i] == arr[j])
			{
				num[j]++;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << "=" << num[i] << "개" << endl;
	}

	return 0;
}