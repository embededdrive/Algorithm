#include <iostream>

using namespace std;

int main()
{
	int arr[6] = { 5, 4, 1, 2, 7, 8 }, num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int i = 5; i >= 0; i--) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}

	return 0;
}