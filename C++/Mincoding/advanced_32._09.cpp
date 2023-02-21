#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(char left, char right)
{
	return left > right;
}

int main() {
	string str;

	cin >> str;

	char arr[100];
	int len = str.length();
	int cnt[100] = { 0 };

	for (int i = 0; i < len; i++)
		arr[i] = str[i];

	sort(arr, arr + len, cmp);

	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cnt[arr[i]]++;
	}

	char maxCh = 0;
	int maxCnt = 0;

	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		if (cnt[ch] > maxCnt)
		{
			maxCnt = cnt[ch];
			maxCh = ch;
		}
	}

	cout << maxCh;

	return 0;
}