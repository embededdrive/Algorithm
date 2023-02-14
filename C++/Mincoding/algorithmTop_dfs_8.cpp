#include <iostream>
#include <vector>

using namespace std;

struct Node {
	int next;
	int len;
};

vector<Node> vec[100001];

int n, used[100001], robotA, robotB;
int distA, distB, needLess;
int firstLen, startWith;

void dfs(int now, int sumOfLen)
{
	if (now == robotA && sumOfLen < distA)
	{
		distA = sumOfLen;
		if (needLess < firstLen) needLess = firstLen;
	}

	if (now == robotB && sumOfLen < distB)
	{
		distB = sumOfLen;
		if (needLess < firstLen) needLess = firstLen;
	}

	for (int i = 0; i < vec[now].size(); i++)
	{
		int next = vec[now][i].next;
		if (used[next]) continue;
		if (now == startWith)
		{
			firstLen = vec[now][i].len;
		}
		used[next] = 1;
		dfs(next, sumOfLen + vec[now][i].len);
	}
}

int main()
{
	int minLength = 2e+09;
	int calculated[100001] = { 0 };
	cin >> n >> robotA >> robotB;

	for (int i = 0; i < n - 1; i++)
	{
		int roomA, roomB, length;

		cin >> roomA >> roomB >> length;

		Node newNode;
		newNode.len = length;
		newNode.next = roomB;

		vec[roomA].push_back(newNode);

		newNode.next = roomA;
		vec[roomB].push_back(newNode);
	}

	for (int i = 1; i <= n; i++)
	{
		if (calculated[i] != 0) continue;
		distA = 2e+09, distB = 2e+09, needLess = 0;
		firstLen = 0;
		for (int j = 0; j <= n; j++) used[j] = 0;
		startWith = i;

		used[i] = 1;
		dfs(i, 0);

		int shortPath = distA + distB - needLess;
		calculated[i] = shortPath;

		if (shortPath < minLength)
		{
			minLength = shortPath;
		}

		if (vec[i].size() == 2)
		{
			int next = i;
			while (vec[next].size() == 2)
			{
				int next1 = vec[next][0].next;
				int next2 = vec[next][1].next;

				if (calculated[next1] != 0 && calculated[next2] == 0)
				{
					next = next2;
				}
				else if (calculated[next1] == 0 && calculated[next2] != 0) {
					next = next1;
				}
				else break;

				if (vec[next].size() != 2) break;

				int firstLen1 = vec[next][0].len;
				int firstLen2 = vec[next][1].len;

				if (firstLen1 > firstLen2)
				{
					shortPath = distA + distB - firstLen1;
				}
				else {
					shortPath = distA + distB - firstLen2;
				}
				calculated[next] = shortPath;

				if (shortPath < minLength)
				{
					minLength = shortPath;
				}
			}
		}
	}

	cout << minLength;

	return 0;
}