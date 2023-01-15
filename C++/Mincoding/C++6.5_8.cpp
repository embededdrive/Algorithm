#include <iostream>

using namespace std;

int main()
{
	char arr1[5], arr2[5], ch;

	cin >> ch;

	for (int i = 0; i < 5; i++)
	{
		arr1[i] = (char)(ch + i);
		arr2[i] = (char)(ch - i);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i];
	}

	return 0;
}