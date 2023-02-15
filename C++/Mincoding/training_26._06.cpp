#include <iostream>

using namespace std;

int main()
{
	struct coordinate
	{
		int y, x;
	};

	coordinate input[6];
	bool isDup = false;

	for (int i = 0; i < 6; i++)
	{
		cin >> input[i].y >> input[i].x;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 1 + i; j < 6; j++)
		{
			if (input[i].y == input[j].y && input[i].x == input[j].x)
			{
				isDup = true;
				break;
			}
		}
		if (isDup) break;
	}

	if (isDup) cout << "중복된좌표발견";
	else cout << "중복없음";

	return 0;
}