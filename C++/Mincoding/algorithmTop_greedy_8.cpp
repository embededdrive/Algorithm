#include <iostream>
#include <algorithm>

using namespace std;

struct Log {
	int start;
	int end;
	int h;
	int idx;
};

Log logs[100001];
int group[100001];

bool cmp1(Log left, Log right){
	return left.start < right.start;
}

bool cmp2(Log left, Log right) {
	return left.idx < right.idx;
}

int find(int num)
{
	if (group[num] == num)
		return num;

	int ret = find(group[num]);
	group[num] = ret;
	return ret;
}

void uunion(int a, int b)
{
	int rA = find(a);
	int rB = find(b);

	if (rA == rB)
		return;

	group[rB] = rA;
}

int main()
{
	int n, q;

	cin >> n >> q;

	for (int i = 1; i <= n; i++)
	{
		int st, en, h;
		cin >> st >> en >> h;
		logs[i] = { st, en, h, i};

		group[i] = i;
	}

	sort(logs + 1, logs + n + 1, cmp1);

	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (logs[i].end >= logs[j].start)
				uunion(logs[i].idx, logs[j].idx);
			else
				break;
		}
	}

	sort(logs + 1, logs + n + 1, cmp2);

	for (int i = 0; i < q; i++)
	{
		int a, b;

		cin >> a >> b;

		group[a] = find(a);
		group[b] = find(b);

		if (group[a] == group[b])
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}

	return 0;
}