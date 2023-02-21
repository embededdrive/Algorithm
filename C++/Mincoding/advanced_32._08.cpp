#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string rename(string name)
{
	bool hasUpper = false;
	int len = name.length();

	for (int i = 1; i < len; i++)
	{
		if (name[i] >= 'A' && name[i] <= 'Z')
			hasUpper = true;
	}

	if (hasUpper)
	{
		for (int i = 0; i < len; i++)
		{
			if (name[i] >= 'a' && name[i] <= 'z')
				name[i] = name[i] - 'a' + 'A';
		}
	}
	else {
		if (name[0] >= 'a' && name[0] <= 'z')
			name[0] = name[0] - 'a' + 'A';
	}

	return name;
}

int main()
{
	int n;
	string names[101];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> names[i];
		names[i] = rename(names[i]);
	}

	sort(names, names + n);

	for (int i = 0; i < n; i++)
		cout << names[i] << '\n';

	return 0;
}