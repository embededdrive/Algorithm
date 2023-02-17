#include <iostream>
#include <queue>

using namespace std;

struct Stone {
	bool isGold;
	int weight;
};

bool cmp(Stone left, Stone right){
	return left.weight > right.weight;
}

int main()
{
	int n;
	priority_queue<Stone, vector<Stone>, cmp> pq;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		pq.push({ true, num });
	}

	return 0;
}