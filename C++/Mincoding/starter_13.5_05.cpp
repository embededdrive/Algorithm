
#include <iostream>

using namespace std;

int main()
{
	char arr[2][6] = {
		'4', '5', '6', '1', '3', '2',
		'D', 'F', 'Q', 'W', 'G', 'Z'
	};

	int num, idx;

	cin >> num;

	for (int i = 0; i < 6; i++)
	{
		if (arr[0][i] - '0' == num)
		{
			idx = i;
			break;
		}
	}

	cout << arr[1][idx];

	return 0;
}