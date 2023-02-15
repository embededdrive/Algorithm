#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char ch[11];
	int dat[256] = {0}, cnt = 0;

	cin >> ch;

	int len = strlen(ch);

	for (int i = 0; i < len; i++)
	{
		dat[ch[i]]++;
	}

	for (char idx = 'A'; idx <= 'Z'; idx++)
	{
		if (dat[idx] != 0) cnt++;
	}

	cout << cnt << "종류";

	return 0;
}