#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, cnt = 0;
	string str[100], compare = "HITSMUSIC";

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			string newStr = str[i] + str[j];

			if (newStr == compare)
			{
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}