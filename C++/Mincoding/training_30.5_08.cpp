#include <iostream>

using namespace std;

int main()
{
	int isExist[4] = {1, 1, 1, 1};
	int n, idx = -1;
	char heros[5] = "BIAH";

	cin >> n;

	while (true)
	{
		int remains = isExist[0] + isExist[1] + isExist[2] + isExist[3];
		if (remains == 0) break;

		int cnt = n;
		while (cnt > 0)
		{
			idx = (idx + 1) % 4;
			if (isExist[idx] == 1)
				cnt--;
		}

		cout << heros[idx] << ' ';
		isExist[idx] = 0;
	}

    return 0;
}