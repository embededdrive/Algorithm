#include <iostream>
#include<cstring>

using namespace std;

int main()
{
	char arr[10], a, b;
	int side[2] = { -1, 1 }, len;

	cin >> arr >> a >> b;

	len = strlen(arr);

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == a || arr[i] == b)
		{
			for (int j = 0; j < 2; j++)
			{
				int idx = i + side[j];

				if (idx >= 0 && idx < len)
				{
					arr[idx] = '#';
				}
			}
		}
	}

	cout << arr;

	return 0;
}