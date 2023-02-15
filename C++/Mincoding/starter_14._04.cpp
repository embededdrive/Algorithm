#include <iostream>

using namespace std;

int main()
{
	char arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			cout << arr[j] << ' ';
		}
		cout << endl;
	}

	return 0;
}