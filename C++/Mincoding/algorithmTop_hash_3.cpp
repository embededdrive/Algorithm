#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct Coord {
	int y, x;
};

int main()
{
	int h, w;
	unordered_map<int, vector<Coord>> um;

	cin >> h >> w;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			int num;

			cin >> num;

			um[num].push_back({ i, j });
		}
	}

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int target;

		cin >> target;

		int size = um[target].size();

		if (size == 0)
		{
			cout << "none\n";
		}
		else {
			for (int i = 0; i < size; i++)
			{
				cout << '(' << um[target][i].y << ',' << um[target][i].x << ") ";
			}
			cout << '\n';
		}
	}

	return 0;
}