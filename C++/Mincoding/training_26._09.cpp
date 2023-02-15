#include <iostream>

using namespace std;

int main()
{
	char strs[11], *ptrs[4];

	cin >> strs;

	int index[4];

	for (int i = 0; i < 4; i++)
	{
		int idx;
		cin >> idx;

		ptrs[i] = &strs[idx];
	}

	for (int i = 0; i < 4; i++)
	{
		cout << *ptrs[i];
	}

	return 0;
}