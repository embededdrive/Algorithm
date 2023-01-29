#include <iostream>
#include<cstring>

using namespace std;

void run(int lev)
{
	cout << lev << ' ';
	if (lev == 1) return;

	run(lev - 1);
	cout << lev << ' ';
}

int main()
{
	int level;
	char str[100];
	cin >> str;

	level = strlen(str);

	run(level);

	return 0;
}