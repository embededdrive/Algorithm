#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int s, d, cnt = 0;
	bool isFound = false;
	int visited[100001] = { 0 };

	cin >> s >> d;

	queue<int> q;

	q.push(s);
	visited[s] = 1;

	while (!q.empty())
	{
		int size = q.size();
		cnt++;

		for (int i = 0; i < size; i++)
		{
			int now = q.front();
			q.pop();


			int next[4];

			next[0] = now * 2;
			next[1] = now / 2;
			next[2] = now + 1;
			next[3] = now - 1;

			for (int j = 0; j < 4; j++)
			{
				if (next[j] < 0 || next[j] > 100000)
					continue;
				if (visited[next[j]])
					continue;

				visited[next[j]] = 1;
				q.push(next[j]);

				if (next[j] == d)
				{
					isFound = true;
					break;
				}
			}
			if (isFound) break;
		}
		if (isFound) break;
	}

	cout << cnt;

	return 0;
}