#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, m, c;
int honey[10][10];

int getMaxHoney(int y, int x)
{
	int sum = honey[y][x];
	int use = 0;

	for (int i = 1; i < m; i++)
	{
		if (x + i >= n)
			break;

		if (sum + honey[y][x + i] > c)
			break;

		sum += honey[y][x + i];
	}

	return sum;
}

int getMaxInRange(int y, int x)
{

}

void input()
{
	cin >> n >> m >> c;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> honey[i][j];
}

int main()
{
	int t;

	cin >> t;

	input();


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << getMaxHoney(i, j) << ' ';
		}
		cout << endl;
	}
	

	/*for (int tc = 1; tc <= t; tc++)
	{

		

		cout << '#' << tc << ' ' << ans << '\n';
	}*/

	return 0;
}


/*

특정 좌표의 최대 채취량 구하는 함수

특정 좌표로부터 마지막 좌표까지의 최대 채취량을 구하는 DP함수

*/