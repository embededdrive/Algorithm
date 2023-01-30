#include <iostream>

using namespace std;

int inputs[2][1000001];
int heights[1000001];

int main()
{
	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		bool isCorrect = true;
		cin >> n;

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> inputs[i][j];
			}
		}

		for (int i = 0; i < n; i++)
		{
			heights[inputs[1][i]] = inputs[0][i];
		}

		for (int i = 1; i < n; i++)
		{
			if (heights[i + 1] > heights[i])
			{
				isCorrect = false;
				break;
			}
		}

		if (isCorrect)
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}