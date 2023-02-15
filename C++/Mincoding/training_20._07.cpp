#include <iostream>

using namespace std;

int arr[8] = { 3, 7, 4, 1, 9, 4, 6, 2 };

void run(int lev)
{
	cout << arr[lev] << ' ';
	if (lev == 0) return;
	run(lev - 1);
	cout << arr[lev] << ' ';
}

int main()
{
	int num;

	cin >> num;

	run(num);

	return 0;
}