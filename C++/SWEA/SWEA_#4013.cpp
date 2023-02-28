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
	// 1 시계방향
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
			input.pop();

			// 만약 3번 바퀴라면
			// 
			// 1번 바퀴까지
			// 4번 바퀴까지
		}
	}

	return 0;
}