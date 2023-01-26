#include <iostream>

using namespace std;

char arr[6];

void run(int lev)
{
	if (lev == 5)
	{
		cout << '\n';
		return;
	}
	cout << arr[lev];
	run(lev + 1);
	cout << arr[lev];
}

int main()
{
	cin >> arr;

	run(0);

	return 0;
}