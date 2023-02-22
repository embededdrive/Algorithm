#include <iostream>
#include <unordered_map>

using namespace std;

struct Team {
	int sum;
	int cnt;
};

int main()
{
	int n;
	unordered_map<string, Team> um;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string name;
		int score;

		cin >> name >> score;

		if (um.find(name) == um.end())
		{
			um[name] = { score, 1 };
		}
		else {
			um[name].cnt += 1;
			um[name].sum += score;
		}
	}

	string higher;
	int max = 0;
	string target;

	for (int i = 0; i < 2; i++)
	{
		cin >> target;
		cout << um[target].cnt << ' ' << um[target].sum << '\n';
		if (um[target].sum > max)
		{
			max = um[target].sum;
			higher = target;
		}
	}

	cout << higher;

	return 0;
}