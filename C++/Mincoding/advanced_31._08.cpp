#include <iostream>
#include <string>

using namespace std;

int act(int dough)
{
	dough *= 2;

	string str = to_string(dough);
	int len = str.length();

	for (int i = 0; i < len / 2; i++)
	{
		swap(str[i], str[len - 1 - i]);
	}

	int ret = stoi(str);

	return ret;
}

int main()
{
	int p, n;

	cin >> p >> n;

	for (int i = 0; i < n; i++)
	{
		p = act(p);
	}

	cout << p;

	return 0;
}