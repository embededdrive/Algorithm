#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int floor = 1;
	char command[10];

	for (int i = 0; i < 5; i++)
	{
		cin >> command;
		if (strcmp(command, "up") == 0) floor++;
		else if (strcmp(command, "down") == 0) floor--;
	}

	if (floor > 0)
	{
		cout << floor;
	}
	else {
		cout << 'B' << abs(floor) + 1;
	}

	return 0;
}