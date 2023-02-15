#include <iostream>

using namespace std;

int main()
{
	int idx, n, cnt = 0;
	string str = "CHRISTMAS", stickers[100];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> stickers[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					string fullSentence = "";

					fullSentence = stickers[i] + stickers[j] + stickers[k] + stickers[l];

					if (fullSentence == str)
					{
						cnt++;
					}

				}
			}
		}
	}

	cout << cnt;

	return 0;
}