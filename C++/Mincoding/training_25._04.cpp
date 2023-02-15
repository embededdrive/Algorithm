#include <iostream>
#include <string>

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

	idx = 0;
	while (true)
	{
		idx = str.find('^', idx);
		if (idx == -1) break;
		while (true)
		{
			len = str.length();
			if (len >= idx + 2)
			{
				if (str[idx] == '^' && str[idx + 1] != '_' && str[idx + 2] == '^')
				{
					str.erase(idx + 1, 1);
					str.insert(idx + 1, "_");
				}
				else break;
			}
			else break;
		}

		idx = idx + 1;
	}

	cout << str;

	return 0;
}