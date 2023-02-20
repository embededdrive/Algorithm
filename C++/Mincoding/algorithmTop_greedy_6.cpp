#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<int>> pq;
	int n, time = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		pq.push(num);
	}

	while (pq.size() > 1)
	{
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();

		time += a + b;

		pq.push(a + b);
	}

	cout << time;

	return 0;
}