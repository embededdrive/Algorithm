#include <iostream>

using namespace std;

string str[100];

char checkValid(string sen)
{
	int prev = 0;
	int next;

	while (true)
	{
		int dat[256] = { 0, };

		prev = sen.find('<', prev);
		if (prev == -1) break;

		next = sen.find('>', prev);
		if (next == -1) break;

		for (int i = prev + 1; i < next; i++)
		{
			dat[sen[i]]++;
			if (dat[sen[i]] > 1) return 'X';
		}

		prev = next + 1;
	}
	return 'O';
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << checkValid(str[i]);
	}

	return 0;
}