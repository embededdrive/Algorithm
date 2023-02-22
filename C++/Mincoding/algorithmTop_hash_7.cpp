#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	string lyrics;

	cin >> lyrics;

	unordered_map<string, int> um;

	int len = lyrics.length();

	for (int size = 2; size <= 5; size++)
	{
		for (int i = 0; i < len - size + 1; i++)
		{
			string sub = "";

			for (int j = i; j < i + size; j++)
			{
				sub += lyrics[j];
			}

			if (um.find(sub) == um.end())
			{
				um[sub] = 1;
			}
			else {
				um[sub]++;
			}
		}
	}

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string target;

		cin >> target;

		cout << um[target] << '\n';
	}

	return 0;
}
