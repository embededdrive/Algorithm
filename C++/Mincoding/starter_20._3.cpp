#include <iostream>

using namespace std;

int arr[6];

void run(int lev)
{
	cout << arr[lev] << ' ';
	if (lev == 5)
	{
		return;
	}
	run(lev + 1);
	cout << arr[lev] << ' ';
}

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	run(0);

	return 0;
}