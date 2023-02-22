#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> um;

int main()
{
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		if (um.find(num) != um.end())
		{
			um[num]++;
		}
		else {
			um[num] = 1;
		}
	}

	for (int i = 0; i < m; i++)
	{
		int target;
		cin >> target;

		cout << um[target] << ' ';
	}

	return 0;
}