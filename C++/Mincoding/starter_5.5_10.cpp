#include <iostream>

using namespace std;

int main()
{	
	int arr[5];
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = a + b * i;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}