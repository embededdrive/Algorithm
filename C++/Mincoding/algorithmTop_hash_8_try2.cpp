#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct Coord
{
	int y, x;
};

string curtain[2000];
string pattern[20];

string getString(int y, int x, int size, int from)
{
	string temp = "";

	for (int i = y; i < y + size; i++)
	{
		if (from == 1)
		{
			temp += curtain[i].substr(x, size);
		}
		else {
			temp += pattern[i].substr(x, size);
		}
	}

	return temp;
}

int main()
{
	int height, width;
	unordered_map<string, vector<Coord>> um;

	cin >> height >> width;

	for (int i = 0; i < height; i++)
		cin >> curtain[i];

	int pn;
	int compareSize;
	bool doubleCheck = false;

	cin >> pn;

	if (pn > 2)
	{
		compareSize = 2;
		doubleCheck = true;
	}

	else
		compareSize = pn;


	for (int i = 0; i < height - compareSize + 1; i++)
	{
		for (int j = 0; j < width - compareSize + 1; j++)
		{
			string key = getString(i, j, compareSize, 1);

			um[key].push_back({ i, j });
		}
	}

	for (int i = 0; i < pn; i++)
		cin >> pattern[i];

	string search = getString(0, 0, compareSize, 0);
	string fullSearch = search;

	int size = um[search].size();

	if (doubleCheck == true)
	{
		for (int i = 0; i < size; i++)
		{
			Coord now = um[search][i];

			if (now.y + pn > height || now.x + pn > width)
				continue;

			string fullKey = getString(now.y, now.x, pn, 1);

			um[fullKey].push_back({ now.y, now.x });
		}

		fullSearch = getString(0, 0, pn, 0);
	}

	int fullSize = um[fullSearch].size();

	for (int i = 0; i < fullSize; i++)
	{
		Coord filtered = um[fullSearch][i];

		cout << filtered.y << ',' << filtered.x << '\n';
	}

	return 0;
}