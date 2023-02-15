#include <iostream>

using namespace std;

int main()
{
	int arrX[4] = { 0 };
	int arrY[4] = { 0 };
	char isSafe = true;

	for (int i = 0; i < 3; i++)
	{
		int y, x;

		cin >> y >> x;

		arrY[y]++;
		arrX[x]++;
	}

	for (int i = 0; i < 4; i++)
	{
		if (arrY[i] > 1 || arrX[i] > 1)
		{
			isSafe = false;
			break;
		}
	}

	if (isSafe)
	{
		cout << "안전";
	}
	else {
		cout << "위험";
	}

	return 0;
}