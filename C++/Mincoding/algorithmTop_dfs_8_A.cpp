#include <iostream>
#include <vector>

using namespace std;

struct Node
{
	int node;
	int dist;
};

vector<Node> arr[100001];

int n;
int shortDistance = 2e+09, longEdge = 0;
int visited[100001], currentDistance;

void dfs(int now, int target)
{
	if (now == target)
	{
		int total = currentDistance - longEdge;
		if (shortDistance > total) shortDistance = total;
	}

	for (int i = 0; i < arr[now].size(); i++)
	{
		int next = arr[now][i].node;
		int dist = arr[now][i].dist;

		if (visited[next]) continue;

		int temp = longEdge;
		if (dist > longEdge) longEdge = dist;

		visited[next] = 1;
		currentDistance += dist;
		dfs(next, target);
		currentDistance -= dist;
		visited[next] = 0;

		longEdge = temp;
	}
}

int main()
{
	int robotA, robotB;

	cin >> n >> robotA >> robotB;

	for (int i = 0; i < n - 1; i++)
	{
		int roomA, roomB, dist;

		cin >> roomA >> roomB >> dist;

		arr[roomA].push_back({ roomB, dist });
		arr[roomB].push_back({ roomA, dist });
	}

	visited[robotA] = 1;
	dfs(robotA, robotB);

	cout << shortDistance;

	return 0;
}