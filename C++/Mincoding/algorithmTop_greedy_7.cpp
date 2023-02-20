#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	int cnt = 0;

	cin >> a >> b;

	while (stoi(b) > stoi(a))
	{
		int numB = stoi(b);
		int len = b.length();

		if (b[len - 1] == '1')
			b = b.substr(0, len - 1);
		else if (numB % 2 == 0)
			b = to_string(numB / 2);
		else
			break;

		cnt++;
	}

	if (stoi(b) == stoi(a))
		cout << cnt;
	else
		cout << -1;

	return 0;
}