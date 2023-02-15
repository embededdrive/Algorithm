#include <iostream>

using namespace std;

int main()
{
	char arr[5];

	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < num; i++)
	{
		cout << arr[i];
	}

	return 0;
}