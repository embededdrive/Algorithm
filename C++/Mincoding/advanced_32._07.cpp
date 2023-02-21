#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
	vector<int> crops[3][3];

	int n, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int y, x;
		char crop[11];

		cin >> y >> x >> crop;

		for (int i = 0; i < strlen(crop); i++)
		{
			crops[y][x].push_back(crop[i] - '0');
			cnt++;
		}
	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int strength;
		
		cin >> strength;

		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				int size = crops[j][k].size() - 1;

				if (size != -1)
				{
					int top = crops[j][k][size];

					if (top <= strength)
					{
						crops[j][k].pop_back();
						cnt--;
					}
					else {
						crops[j][k][size] = top - strength;
					}
				}
			}
		}
	}

	cout << cnt;

	return 0;
}