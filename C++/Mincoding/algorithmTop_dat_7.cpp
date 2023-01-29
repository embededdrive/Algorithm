#include <iostream>

using namespace std;

int dat[10000001] = { 0 };

int main()
{
	int h, w, max = -1, award;

	cin >> h >> w;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			int id;
			cin >> id;
			dat[id]++;
		}
	}

	for (int i = 0; i < 10000001; i++)
	{
		if (dat[i] > max)
		{
			max = dat[i];
			award = i;
		}
		else if (dat[i] == max) {
			if (i < award) award = i;
		}
	}

	cout << award;

	return 0;
}