#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string left, string right)
{
	if (left.length() < right.length())
		return true;
	if (left.length() > right.length())
		return false;
	if (left < right)
		return true;
	if (right > left)
		return false;
	return false;
}

int main()
{
	int n;
	string str[20];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}

	sort(str, str + n, cmp);

	for (int i = 0; i < n; i++)
	{
		cout << str[i] << '\n';
	}

	return 0;
}