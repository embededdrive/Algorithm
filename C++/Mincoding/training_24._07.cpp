#include <iostream>

using namespace std;

int main()
{
	string str[3][3] = {
		{"BHC", "BBQ", "KFC"},
		{"MC", "7AVE", "PAPA"},
		{"DHC", "OBS", "MOMS"}
	}, concat;
	int y, x;
	int dy[4] = {-1, 0, 1, 0};
	int dx[4] = { 0, -1, 0, 1 };

	cin >> y >> x;

	for (int i = 0; i < 4; i++)
	{
		int posy = y + dy[i];
		int posx = x + dx[i];

		if (posy >= 0 && posy < 3 && posx >= 0 && posx < 3)
		{
			concat = concat + str[posy][posx];
		}
	}

	cout << concat;

	return 0;
}