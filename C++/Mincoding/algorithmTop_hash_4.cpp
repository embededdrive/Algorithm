#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	int n;
	int max = 0;
	unordered_map<string, int> um;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string input;

		cin >> input;

		sort(input.begin(), input.end());

		if (um.find(input) == um.end())
			um[input] = 1;
		else
			um[input]++;
		if (um[input] > max)
			max = um[input];
	}

	cout << max;

	return 0;
}