#include <iostream>
#include <algorithm>

using namespace std;

struct Meeting
{
	int start;
	int end;
};

bool cmp(Meeting left, Meeting right)
{
	return left.end < right.end;
}

int main()
{
	int time = 0, n, idx = 0, cnt = 0;
	Meeting meetings[100000];

	cin >> n;

	for (int i = 0; i < n; i++)
	{	
		int a, b;
		cin >> a >> b;

		meetings[i] = { a, b };
	}

	sort(meetings, meetings + n, cmp);
	
	while (idx < n)
	{
		if (meetings[idx].start >= time)
		{
			time = meetings[idx].end;
			cnt++;
		}

		idx++;
	}

	cout << cnt;

	return 0;
}