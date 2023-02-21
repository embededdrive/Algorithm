#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int left, int right)
{
	return left > right;
}

int main()
{
	int n;
	int cnt[26] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		int len = str.length();

		for (int j = 0; j < len; j++)
		{
			char ch = str[j];
			int pos = len - j;

			int num = 1;

			for (int k = 1; k < pos; k++)
			{
				num *= 10;
			}

			cnt[ch - 'A'] += num;
		}
	}

	sort(cnt, cnt + 26, cmp);

	int sum = 0, value = 9;
	int idx = 0;

	while (cnt[idx] != 0)
		sum += cnt[idx++] * value--;

	cout << sum;

	return 0;
}