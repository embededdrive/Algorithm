#include <iostream>
#include <string>

using namespace std;

string num;
int n, checkPath[2];
char numPath[81];
bool goodNum;

void partCheck(int lev, int start)
{
	if (lev == 2)
	{
		int size = checkPath[1] - checkPath[0] + 1;
		string sub = num.substr(checkPath[0], size);
		// cout << path[0] << path[1] << ' ' << sub << endl;

		int idx = 0;
		while (true)
		{
			int idx1 = num.find(sub, idx);
			int idx2 = num.find(sub, idx1 + size);
			if (idx2 == -1) break;

			if (idx2 - idx1 == size)
			{
				goodNum = false;
			}
			idx = idx2;
		}

		return;
	}

	for (int i = start; i < n; i++)
	{
		checkPath[lev] = i;
		partCheck(lev + 1, i);
		checkPath[lev] = 0;
	}
}

bool isGood(string number)
{
	num = number;
	goodNum = true;
	partCheck(0, 0);
	if (goodNum) return true;
	else return false;
}

int main()
{
	string input;
	cin >> input;
	n = input.length();

	// run(0);
	bool ret = isGood(input);

	if (ret) cout << "좋은 수열";
	else cout << "나쁜 수열";

	return 0;
}