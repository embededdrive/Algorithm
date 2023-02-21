#include<iostream>
#include<queue>

using namespace std;

struct Set
{
	int num;
	char ch;
};

struct cmp
{
	bool operator()(Set& left, Set& right)
	{
		if (left.num > right.num)
			return true;
		if (left.num < right.num)
			return false;
		if (left.ch > right.ch)
			return true;
		if (left.ch < right.ch)
			return false;
		return false;
	}
};

int main()
{
	int n;

	cin >> n;

	priority_queue<Set, vector<Set>, cmp> pq;

	for (int i = 0; i < n; i++)
	{
		int num;
		char ch;

		cin >> num >> ch;

		pq.push({ num, ch });
	}

	while (!pq.empty())
	{
		Set now = pq.top();
		pq.pop();

		cout << now.num << ' ' << now.ch << '\n';
	}

	return 0;
}