#include <iostream>

using namespace std;

int main()
{
	int arr[6] = { 3, 4, 1, 6, 7, 5 }, num = 0;

	while (num < 6)
	{
		cout << arr[num++] << ' ';
	}

	return 0;
}