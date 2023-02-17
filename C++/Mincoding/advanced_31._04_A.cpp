#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string map[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> map[i];
	}

	for (int i = 0; i < 5; i++)
	{
		swap(map[i][1], map[i][3]);
	}

	for (int i = 0; i < 5; i++)
	{
		if (map[i] == "MAPOM")
		{
			cout << "yes";
			return 0;
		}
	}

	cout << "no";

	return 0;
}