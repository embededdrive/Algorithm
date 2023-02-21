#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
	vector<int> vec[5];

	for (int i = 0; i < 5; i++)
	{
		char str[10];
		cin >> str;
		
		int len = strlen(str);

		for (int j = 0; j < len; j++)
			vec[i].push_back(str[j] - '0');
	}

	for (int i = 0; i < 2; i++)
	{
		int line;
		cin >> line;

		sort(vec[line].begin(), vec[line].end());
	}

	for (int i = 0; i < 5; i++)
		cout << vec[i][0] << ' ';

	return 0;
}