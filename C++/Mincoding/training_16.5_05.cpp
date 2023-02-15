#include <iostream>

using namespace std;

int main()
{
	char arr[11], a, b;

	cin >> arr >> a >> b;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			break;
		}
		else if (arr[i] == a) {
			arr[i] = b;
		}
	}

	cout << arr;

	return 0;
}