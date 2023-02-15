#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	string names[10];

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> names[i];
	}

	for (int i = 0; i < num; i++)
	{
		int dat[256] = { 0, }, cnt = 0;
		bool isGood = true;
		int len = names[i].length();

		for (int j = 0; j < len; j++)
		{
			if (names[i][j] < 'a' || names[i][j] > 'z')
			{
				isGood = false;
				break;
			}
			dat[names[i][j]]++;
		}

		for (char i = 'a'; i <= 'z'; i++)
		{
			if (dat[i] > 2) isGood = false;
			if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') cnt += dat[i];
		}

		if (cnt != 3) isGood = false;

		if (isGood) cout << "good\n";
		else cout << "no\n";
	}

	

	return 0;
}