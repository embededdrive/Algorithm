#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	unordered_map<int, vector<string>> by;
	unordered_map<string, vector<int>> list;

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string cmd, name;
		int no;

		cin >> cmd;

		if (cmd == "recommand")
		{
			cin >> no >> name;

			by[no].push_back(name);
			list[name].push_back(no);

			sort(list[name].begin(), list[name].end());

			cout << by[no].size() << '\n';
		}
		else if (cmd == "print")
		{
			cin >> no;

			int size = by[no].size();

			if (size == 0)
			{
				cout << "none\n";
			}
			else {
				for (int i = 0; i < size; i++)
				{
					cout << by[no][i] << ' ';
				}
				cout << '\n';
			}
		}
		else if (cmd == "whois") {
			cin >> name;

			int size = list[name].size();

			if (size == 0)
			{
				cout << "none\n";
			}
			else {
				for (int i = 0; i < size; i++)
				{
					cout << list[name][i] << ' ';
				}
				cout << '\n';
			}
		}
	}

	return 0;
}