#include <iostream>
#include <algorithm>

using namespace std;

struct Score {
	int code;
	int interview;
};

Score applicants[100000];
int dat[100000];

bool cmp(Score left, Score right) {
	return left.code < right.code;
}

int main()
{
	int n, cnt = 1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int score, interview;
		cin >> score >> interview;

		applicants[i] = { score, interview };
	}

	sort(applicants, applicants + n, cmp);

	int atLeast = applicants[0].interview;

	for (int i = 1; i < n; i++)
	{
		if (applicants[i].interview < atLeast)
		{
			atLeast = applicants[i].interview;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}