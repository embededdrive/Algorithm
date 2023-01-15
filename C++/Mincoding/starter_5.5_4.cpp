#include <iostream>

using namespace std;

int arr[5];

void KFC()
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
}

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = num - i;
	}

	KFC();

	return 0;
}