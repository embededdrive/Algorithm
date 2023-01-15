#include <iostream>

using namespace std;

int main()
{
	char arr[6] = {'#', '_', '#', '_', '#', '#'};

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == '#')
		{
			cout << "샵";
		}
		else if (arr[i] == '_') {
			cout << "무";
		}
	}

	return 0;
}