#include <iostream>
#include <cstring>

using namespace std;

char path[5], passwords[10][5];
int cnts[10], cnt, n;

void run(int lev)
{
	if (lev == 4)
	{
		cnt++;
		for (int i = 0; i < n; i++)
		{
			if (strcmp(path, passwords[i]) == 0)
			{
				cnts[i] = cnt;
			}
		}
		return;
	}

	for (int i = 0; i < 26; i++)
	{
		path[lev] = (char)(i + 65);
		run(lev + 1);
		path[lev] = 0;
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> passwords[i];
	}

    run(0);
	
	for (int i = 0; i < n; i++)
	{
		cout << cnts[i] << '\n';
	}

    return 0;
}