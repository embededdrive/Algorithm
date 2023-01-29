#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char S[1000001];
	int DAT[256] = { 0 }, len;

	cin >> S;

	len = strlen(S);

	for (int i = 0; i < len; i++)
	{
		DAT[S[i]]++;
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (DAT[i] != 0)
		{
			cout << i;
		}
	}

	return 0;
}