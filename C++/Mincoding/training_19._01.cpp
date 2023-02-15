#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] = {
		3, 5, 4,
		1, 1, 2,
		1, 3, 9
	}, x, y, sum = 0;
	int dx[4] = {-1, 1, 0, 0};
	int dy[4] = {0, 0, -1, 1};

	cin >> x >> y;

	for (int i = 0; i < 4; i++)
	{
		int posx = x + dx[i];
		int posy = y + dy[i];

		if (posx >= 0 && posx < 3 && posy >= 0 && posy < 3)
		{
			sum += arr[posx][posy];
		}
	}

	cout << sum;

	return 0;
}