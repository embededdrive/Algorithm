#include <iostream>
#include <queue>

using namespace std;

struct Pos {
	int y, x;
};

int n, w, h;
int map[15][12];

void breakBricks(int idx) {

	queue<Pos> q;

	for (int i = 0; i < h; i++)
		if (map[i][idx] != 0)
		{
			q.push({ i, idx });
			break;
		}



}

int main()
{
	int t;
	
	cin >> t;

	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n >> w >> h;

		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> map[i][j];



	}

	return 0;
}