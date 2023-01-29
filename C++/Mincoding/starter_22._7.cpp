#include <iostream>
#include <cstring>

using namespace std;

char PATH[4], arr[4];
int cnt = 0;
bool isEnd = false;

void run(int lev)
{
	if (isEnd) return;
	if (lev == 3)
	{
		cnt++;
		if (strcmp(PATH, arr) == 0) {
			cout << cnt << "번째";
			isEnd = true;
		}
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		PATH[lev] = 'A' + i;
		run(lev + 1);
	}
}

int main()
{
	cin >> arr;

	run(0);

	return 0;
}