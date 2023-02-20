#include <iostream>
#include <algorithm>

using namespace std;

struct Score {
	int code;
	int interview;
};

Score applicants[100000];
int dat[100000];

bool cmp1(Score left, Score right) {
	return left.code < right.code;
}

bool cmp2(Score left, Score right) {
	return left.interview < right.interview;
}

int main()
{
	int n, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int score, interview;
		cin >> score >> interview;

		applicants[i] = { score, interview };
	}

	sort(applicants, applicants + n, cmp1);

	int minInt = 2e+09;

	for (int i = 0; i < n; i++)
	{
		if (minInt > applicants[i].interview)
		{
			minInt = applicants[i].interview;
		}
		else {
			dat[i] = 1;
			cnt++;
		}
	}

	sort(applicants, applicants + n, cmp2);

	int minCode = 2e+09;

	for (int i = 0; i < n; i++)
	{
		if (minCode > applicants[i].code)
		{
			minCode = applicants[i].code;
		}
		else {
			if (dat[applicants[i].code - 1] == 0)
			{
				dat[applicants[i].code - 1] = 1;
				cnt++;
			}
		}
	}

	cout << n - cnt;

	return 0;
}