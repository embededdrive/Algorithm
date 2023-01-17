#include <iostream>

using namespace std;

int main()
{
	char arr[9] = { 'D', 'A', 'T', 'A', 'P', 'O', 'W', 'E', 'R' }, arr2[9];
	int a, b, idx = 0;
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		arr2[idx++] = arr[i];
	}
	arr2[idx] = '\0';

	for (int i = 0; i < idx; i++)
	{
		cout << arr2[i];
	}

	return 0;
}