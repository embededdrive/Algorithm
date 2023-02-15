#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char arr[4][11];
	int len[4], idx[4] = {0, 1, 2, 3};

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
		len[i] = strlen(arr[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = i; j < 4; j++)
		{
			if (len[i] > len[j])
			{
				int temp = len[i];
				len[i] = len[j];
				len[j] = temp;
				temp = idx[i];
				idx[i] = idx[j];
				idx[j] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << arr[idx[i]] << '\n';
	}

	return 0;
}