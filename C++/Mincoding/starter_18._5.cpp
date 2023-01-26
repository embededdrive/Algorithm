#include <iostream>

using namespace std;

int main()
{
	char S[9];
	int dat[256] = { 0 }, idx = 0;

	cin >> S;

	for (int i = 0; i < 8; i++)
	{
		dat[S[i]]++;
		if (dat[S[i]] > dat[S[idx]])
		{
			dat[S[idx]] = dat[S[i]];
			idx = i;
		}
	}

	cout << S[idx];

	return 0;
}