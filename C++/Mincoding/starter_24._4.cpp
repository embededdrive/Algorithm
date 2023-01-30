#include <iostream>

using namespace std;

int main()
{
	string data;
	int len, dat[256] = { 0 }, maxcnt = 0, mincnt = 1000;
	char max, min;

	cin >> data;

	len = data.length();

	for (int i = 0; i < len; i++)
	{
		dat[data[i]]++;
	}

	for (char i = 'A'; i <= 'K'; i++)
	{
		if (dat[i] > maxcnt)
		{
			maxcnt = dat[i];
			max = i;
		}
		if (dat[i] < mincnt)
		{
			mincnt = dat[i];
			min = i;
		}
	}

	cout << max << '\n' << min;

	return 0;
}