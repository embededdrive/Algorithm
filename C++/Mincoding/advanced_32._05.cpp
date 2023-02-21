#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(string left, string right)
{
	if (left.length() < right.length())
		return true;
	if (left.length() > right.length())
		return false;
	return left < right;
}

int main()
{
	int n;
	vector<string> names;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;

		names.push_back(name);
	}

	sort(names.begin(), names.end(), cmp);

	for (int i = 0; i < names.size(); i++)
		cout << names[i] << '\n';

	return 0;
}