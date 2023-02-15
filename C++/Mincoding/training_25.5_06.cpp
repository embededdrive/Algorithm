#include <iostream>
#include <string>

using namespace std;

string str;

int protocol(int from)
{
	int idx1, idx2;
	idx1 = str.find("http://", from);
	idx2 = str.find("https://", from);

	if (idx1 == -1 && idx2 == -1) return -1;
	else if (idx1 == -1) return idx2 + 8;
	else if (idx2 == -1) return idx1 + 7;
	else {
		if (idx1 < idx2) return idx1 + 7;
		else return idx2 + 8;
	}
}

int domain(int from)
{
	int idx;
	string domains[4] = {
		".com",
		".co.kr",
		".org",
		".net"
	};
	
	for (int i = 0; i < 4; i++)
	{
		idx = str.find(domains[i], from);
		if (idx != -1) return idx;
	}

	return -1;
}

int main()
{
	int idx = 0, cnt = 0;

	cin >> str;

	int len = str.length();

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
	}

	while (true)
	{
		int st, en;
		st = protocol(idx);
		if (st == -1) break;
		en = domain(st);

		if (en - st >= 3) cnt++;

		idx = en;
	}

	cout << cnt << "개";

	return 0;
}