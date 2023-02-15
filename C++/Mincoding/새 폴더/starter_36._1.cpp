#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Edge {
	int node;
	int cost;
};

struct Node {
	int node;
	int accCost;
};

struct cmp {
	bool operator() (Node& left, Node& right)
	{
		return left.accCost > right.accCost;
	}
};

vector<Edge> vec[300001];

const int INF = 2e+09;


int nodeCnt, edgeCnt;

void input()
{
	cin >> nodeCnt >> edgeCnt;

	for (int i = 0; i < edgeCnt; i++)
	{
		int a, b, w;

		cin >> a >> b >> w;

		vec[a].push_back({ b, w });
	}
}

int main()
{
	input();

	priority_queue<Node, vector<Node>, cmp> pq;
	int start = 0;
	pq.push({ start, 0 });

	int dist[20001];
	for (int i = 0; i < 20001; i++) dist[i] = INF;
	dist[start] = 0;

	while (!pq.empty())
	{
		Node now = pq.top();
		pq.pop();

		if (now.accCost > dist[now.node]) continue;

		for (int i = 0; i < vec[now.node].size(); i++)
		{
			int newNode = vec[now.node][i].node;
			int newCost = now.accCost + vec[now.node][i].cost;

			if (dist[newNode] <= newCost) continue;
			dist[newNode] = newCost;

			pq.push({ newNode, newCost });
		}
	}

	int distance = dist[nodeCnt - 1];
	if (distance == INF)
		cout << "impossible";
	else
		cout << distance;

	return 0;
}