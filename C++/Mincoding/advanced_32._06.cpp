#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Candidate {
	int idx;
	int cnt;
};

bool cmp(Candidate left, Candidate right) {
	return left.cnt > right.cnt;
}

int main()
{
	int n, voter;
	Candidate candidate[101];

	vector<string> voted[101];

	cin >> n >> voter;

	for (int i = 0; i < n; i++)
	{
		candidate[i].idx = i;
		candidate[i].cnt = 0;
	}

	for (int i = 0; i < voter; i++)
	{
		int idx;
		string to;

		cin >> idx >> to;

		candidate[idx].cnt++;
		voted[idx].push_back(to);
	}

	sort(candidate, candidate + n, cmp);

	for (int i = 0; i < candidate[0].cnt; i++)
		cout << voted[candidate[0].idx][i] << ' ';

	return 0;
}