#include<iostream>
#include<queue>

using namespace std;

struct Record
{
	string name;
	int score;
};

struct cmp {
	bool operator()(Record left, Record right)
	{
		if (left.score < right.score)
			return true;
		if (left.score > right.score)
			return false;
		return left.name < right.name;
	}

};

int main()
{
	int n;
	priority_queue<Record, vector<Record>, cmp> pq;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string name;
		int score;
		Record first, second, third;

		cin >> name >> score;

		pq.push({ name, score });

		first = pq.top();
		pq.pop();

		if (pq.empty())
		{
			cout << first.name << '\n';
			pq.push(first);
		}
		else {
			second = pq.top();
			pq.pop();
			if (pq.empty())
			{
				cout << first.name << ' ' << second.name << '\n';
				pq.push(first);
				pq.push(second);
			}
			else {
				third = pq.top();
				pq.pop();
				cout << first.name << ' ' << second.name << ' ' << third.name << '\n';
				pq.push(first);
				pq.push(second);
				pq.push(third);
			}
		}
	}

	return 0;
}