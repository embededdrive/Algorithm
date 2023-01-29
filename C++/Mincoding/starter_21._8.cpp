#include <iostream>
#include<cstring>

using namespace std;

int num, y = 5, x = 5;
char commands[5][10] = {
	"up",
	"down",
	"left",
	"right",
	"click"
};

void run(int lev)
{
	if (lev == num) return;

	char command[10];
	cin >> command;

	if (strcmp(command, commands[0]) == 0) y--;
	else if (strcmp(command, commands[1]) == 0) y++;
	else if (strcmp(command, commands[2]) == 0) x--;
	else if (strcmp(command, commands[3]) == 0) x++;
	else if (strcmp(command, commands[4]) == 0) cout << y << ',' << x << '\n';

	run(lev + 1);
}

int main()
{
	cin >> num;

	run(0);

	return 0;
}