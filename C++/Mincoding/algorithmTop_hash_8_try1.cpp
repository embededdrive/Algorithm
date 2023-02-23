#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct Coord
{
	int y, x;
};

char curtain[1000][1000];
char pattern[20][20];

int compareSize;

string getString(int y, int x)
{
	string temp = "";

	for (int i = y; i < y + compareSize; i++)
		for (int j = x; j < x + compareSize; j++)
			temp += curtain[i][j];

	return temp;
}

int main()
{
	int height, width;
	unordered_map<string, vector<Coord>> um;

	cin >> height >> width;

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			cin >> curtain[i][j];

	int pn;

	cin >> pn;

	if (pn > 3)
		compareSize = 3;
	else
		compareSize = pn;


	for (int i = 0; i < height - compareSize + 1; i++)
	{
		for (int j = 0; j < width - compareSize + 1; j++)
		{
			string key = getString(i, j);

			um[key].push_back({ i, j });
		}
	}

	for (int i = 0; i < pn; i++)
		for (int j = 0; j < pn; j++)
			cin >> pattern[i][j];

	string search = "";

	for (int i = 0; i < compareSize; i++)
		for (int j = 0; j < compareSize; j++)
			search += pattern[i][j];



	int size = um[search].size();

	for (int i = 0; i < size; i++)
	{
		int cY = um[search][i].y;
		int cX = um[search][i].x;

		bool isSame = true;

		if (cY + pn > height || cX + pn > width)
			continue;

		for (int j = 0; j < pn; j++)
		{
			for (int k = 0; k < pn; k++)
			{
				if (pattern[j][k] != curtain[cY + j][cX + k])
				{
					isSame = false;
					break;
				}
			}
			if (!isSame)
				break;
		}

		if (isSame)
		{
			cout << cY << ',' << cX << '\n';
		}
	}


	return 0;
}