#include <iostream>

using namespace std;

int main()
{
	string str;

	cin >> str;

	int idx = 0, len = str.length();

	while (true)
	{
		idx = str.find('(', idx);
		if (idx == -1) break;
		int cnt = 0;
		for (int i = idx + 1; i < len; i++)
		{
			if (str[i] == '(')
			{
				cnt++;
			}
			else break;
		}
		str.erase(idx + 1, cnt);

		idx = idx + 1;
	}

	idx = 0, len = str.length();

	while (true)
	{
		idx = str.find(')', idx);
		if (idx == -1) break;
		int cnt = 0;
		for (int i = idx + 1; i < len; i++)
		{
			if (str[i] == ')')
			{
				cnt++;
			}
			else break;
		}
		str.erase(idx + 1, cnt);

		idx = idx + 1;
	}

	idx = 0, len = str.length();

	while (true)
	{
		idx = str.find('^', idx);
		if (idx == -1) break;
		int cnt = 0;
		for (int i = idx; i < len; i++)
		{
			if (str[i] == '^')
			{
				cnt++;
			}
			else break;
		}
		if (cnt > 2)
		{
			str.erase(idx, cnt - 2);
		}

		idx = idx + 1;
	}

	int a = 0;
	int b = 0;
	while (true)
	{
		a = str.find('^', a);
		if (a == -1) break;
		if
	}

	cout << str;

	return 0;
}