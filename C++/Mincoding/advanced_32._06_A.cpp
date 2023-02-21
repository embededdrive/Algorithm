#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, voter, maxIdx = 0;
	int candidate[101] = { 0 };
	vector<string> names[101];

	cin >> n >> voter;

	for (int i = 0; i < voter; i++)
	{
		int to;
		string name;

		cin >> to >> name;

		candidate[to]++;
		names[to].push_back(name);

		if (candidate[to] > candidate[maxIdx])
			maxIdx = to;
		else if (candidate[to] == candidate[maxIdx])
		{
			if (maxIdx >= to)
				maxIdx == to;
		}
	}

	for (int i = 0; i < candidate[maxIdx]; i++)
	{
		cout << names[maxIdx][i] << ' ';
	}

	return 0;
}