#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
	int n, dat[100001] = { 0 };
	char names[100001][100];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int command, id;
		char name[100];

		cin >> command;

		if (command == 1)
		{
			cin >> id >> name;
			if (dat[id] == 1)
			{
				cout << id << " ERROR\n";
			}
			else {
				dat[id] = 1;
				strcpy(names[id], name);
				cout << id << " OK\n";
			}
		}
		else {
			cin >> id;
			if (dat[id] == 1)
			{
				dat[id] = 2;
				cout << id << ' ' << names[id] << " ENTER\n";
			}
			else if (dat[id] == 2)
			{
				dat[id] = 1;
				cout << id << ' ' << names[id] << " EXIT\n";
			}
			else {
				cout << id << " ERROR\n";
			}
		}
	}

	return 0;
}