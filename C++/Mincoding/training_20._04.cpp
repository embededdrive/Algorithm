#include <iostream>

using namespace std;

int num;

void abc(int lev)
{
	if (lev == num + 2 * 3)
	{
		cout << lev << ' ';
		return;
	}
	
	abc(lev + 2);

	cout << lev << ' ';
}

int main()
{
	cin >> num;

	abc(num);

	return 0;
}