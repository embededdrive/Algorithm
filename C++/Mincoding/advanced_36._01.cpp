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

void input()
{
	int n, t;

	cin >> n >> t;

	for (int i = 0; i < t; i++)
	{
		int a, b, w;

		cin >> a >> b >> w;

		vec[a].push_back({ b, w });
	}
}

int main()
{
	input();

	// [준비단계]
	priority_queue<Node, vector<Node>, cmp> pq;
	int start;
	cin >> start;

	pq.push({ start, 0 });
	
	int dist[20001];
	for (int i = 0; i < 20001; i++) dist[i] = INF;
	dist[start] = 0;

	// [구현단계]
	while (!pq.empty())
	{
		Node now = pq.top();
		pq.pop();

		dist[now.node] = now.accCost;
		
		for (int i = 0; i < vec[now.node].size(); i++)
		{
			
		}
	}

	return 0;
}