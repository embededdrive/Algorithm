#include <iostream>

using namespace std;

int arr1[5], arr2[5];

void PrintAll()
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i];
	}
}

int main()
{
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 5; i++)
	{
		arr1[i] = a;
		arr2[i] = b;
	}

	PrintAll();

	return 0;
}