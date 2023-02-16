#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Edge {
	int a, b;
	int cost;
};

bool cmp(Edge left, Edge right)
{
	return left.cost < right.cost;
}

int v, e;
vector<Edge> edges;
int group[100001];

int find(int now)
{
	if (now == group[now]) return now;

	int ret = find(group[now]);
	group[now] = ret;
	return ret;
}

void uunion(int a, int b)
{
	int ra = find(a);
	int rb = find(b);

	if (ra == rb) return;

	group[rb] = ra;
}

int kruskal()
{
	for (int i = 0; i < e; i++)
		group[i] = i;

	sort(edges.begin(), edges.end(), cmp);

	int sum = 0;

	for (int i = 0; i < edges.size(); i++)
	{
		int a = edges[i].a;
		int b = edges[i].b;
		if (find(a) == find(b)) continue;

		uunion(a, b);
		sum += edges[i].cost;
	}

	return sum;
}

int main()
{
    cin >> v >> e;

	for (int i = 0; i < e; i++)
	{
		int a, b, c;

		cin >> a >> b >> c;

		edges.push_back({ a, b, c });
	}

	cout << kruskal();

    return 0;
}