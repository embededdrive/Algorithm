#include <iostream>
#include <queue>

using namespace std;

struct Rotations {
	int wheel;
	int dir;
};

int wheel[5][8];

void rotate(int idx, int dir)
{
	int temp;
	if (dir == 1)
	{
		temp = wheel[idx][7];
		for (int i = 7; i >= 1; i--)
			wheel[idx][i] = wheel[idx][i - 1];
		wheel[idx][0] = temp;
	}
	else if (dir == -1) {
		temp = wheel[idx][0];
		for (int i = 0; i < 7; i++)
			wheel[idx][i] = wheel[idx][i + 1];
		wheel[idx][7] = temp;
	}

	return;
}



int main() {
	int t;

	cin >> t;

	for (int tc = 1; tc <= t; tc++)
	{
		int k;
		queue<Rotations> input;
		queue<Rotations> chained;

		cin >> k;

		for (int i = 1; i <= 4; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				cin >> wheel[i][j];

			}
		}

		for (int i = 0; i < k; i++)
		{

			int w, d;

			cin >> w >> d;

			input.push({ w, d });
		}

		while (!input.empty())
		{
			Rotations now = input.front();
			chained.push(now);
			input.pop();

			int lastNS = wheel[now.wheel][2];
			int lastDir = now.dir;
			for (int i = now.wheel + 1; i <= 4; i++)
			{
				if (lastNS != wheel[i][6])
				{
					int nextDir;
					if (lastDir == -1)
						nextDir = 1;
					else if (lastDir == 1)
						nextDir = -1;

					chained.push({ i, nextDir });
					lastDir = nextDir;
					lastNS = wheel[i][2];
				}
				else {
					break;
				}
			}
			lastNS = wheel[now.wheel][6];
			lastDir = now.dir;
			for (int i = now.wheel - 1; i >= 1; i--)
			{
				if (lastNS != wheel[i][2])
				{
					int nextDir;
					if (lastDir == -1)
						nextDir = 1;
					else if (lastDir == 1)
						nextDir = -1;

					chained.push({ i, nextDir });
					lastDir = nextDir;
					lastNS = wheel[i][6];
				}
				else {
					break;
				}
			}

			while (!chained.empty())
			{
				Rotations rot = chained.front();
				chained.pop();

				rotate(rot.wheel, rot.dir);
			}
		}

		int ans = 0;
		int score[5] = { 0, 1, 2, 4, 8 };
		for (int i = 1; i <= 4; i++)
		{
			if (wheel[i][0] == 1)
			{
				ans += score[i];
			}
		}

		cout << '#' << tc << ' ' << ans << '\n';

	}

	return 0;
}