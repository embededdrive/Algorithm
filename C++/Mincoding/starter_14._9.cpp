#include <iostream>

using namespace std;

int main()
{
	int arr[6] = { 10, 50, 40, 20, 30, 40 }, arr2[6], cnt[6] = {0};

	for (int i = 0; i < 6; i++)
	{
		cin >> arr2[i];
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i] > arr2[j])
			{
				cnt[j]++;
			}
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr2[i] << "=" << cnt[i] << "개" << endl;
	}


	return 0;
}