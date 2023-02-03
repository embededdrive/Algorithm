#include <iostream>
#include <string>

using namespace std;

string num;
int n;
char numPath[81];
bool isEnd = false;

bool isGood(string num) {
	int len = num.length();

	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			int size = j - i + 1;
			string sub = num.substr(i, size);

			int idx = 0;
			while (true)
			{
				int idx1 = num.find(sub, idx);
				int idx2 = num.find(sub, idx1 + 1);
				if (idx2 == -1) break;
				if (idx2 - idx1 == size)
				{
					return false;
				}
				idx = idx2;
			}
		}
	}
	return true;
}

void run(int lev)
{
	if (!isGood(numPath)) return;

	if (lev == n)
	{
		isEnd = true;
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		numPath[lev] = i + '1';
		run(lev + 1);
		if (isEnd) return;
		numPath[lev] = 0;
	}
}

int main()
{
	cin >> n;

	run(0);

	cout << numPath;

	return 0;
}