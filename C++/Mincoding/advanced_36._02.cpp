#include <iostream>
#include <vector>

using namespace std;

int nodeCnt, edgeCnt;
int increaseRate[30001];
const int MAX = 2e+09;

struct Edge
{
	int to;
	int edgeCost;
};

vector<Edge> vec[300001];

int main()
{
	int k, a, b;

	cin >> nodeCnt >> edgeCnt >> k;
	cin >> a >> b;

	for (int i = 0; i < edgeCnt; i++)
	{
		int f, t, c;

		cin >> f >> t >> c;

		vec[f].push_back({t, c});
	}

	for (int i = 1; i < k; i++)
	{
		cin >> increaseRate[i];
	}

	for (int i = 0; i < k; i++)
	{
		int minCost = MAX;

		for (int j = 0; j < edgeCnt; j++)
		{
			int size = vec[j].size();
			for (int k = 0; k < size; k++)
			{
				vec[j][k].edgeCost += increaseRate[i];
			}
		}

		
	}

	return 0;
}