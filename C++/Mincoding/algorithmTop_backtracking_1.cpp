#include <iostream>
#include <string>

using namespace std;

string n;
int sum, len;

void run(int lev)
{
	if (lev == len)
	{
		return;
	}

	sum += n[lev] - '0';

	run(lev + 1);
}

int main()
{
	cin >> n;
	len = n.length();

	run(0);

	cout << sum;

	return 0;
}