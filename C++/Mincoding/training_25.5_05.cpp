#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input, names[100], no[100];
	int cnt = 0;

	cin >> input;

	int len = input.length();
	int prev = 0, next = 100, end, size;
	bool isEnd = false;

	while (true)
	{
		for (char i = '1'; i <= '9'; i++)
		{
			int ret = input.find(i, prev);
			if (ret < next && ret != -1) next = ret;
		}
		if (next == 100) break;

		for (int i = next; i < len; i++)
		{
			if (input[i] > '9')
			{
				end = i;
				break;
			}
			if (i == len - 1) isEnd = true;
		}
		if (isEnd) end = len;

		size = next - prev;
		names[cnt] = input.substr(prev, size);
		size = end - next;
		no[cnt] = input.substr(next, size);
		cnt++;
		prev = end;
		next = 100;
	}

	for (int i = 0; i < cnt; i++)
	{
		cout << names[i] << '#' << stoi(no[i]) + 17 << '\n';
	}

	return 0;
}