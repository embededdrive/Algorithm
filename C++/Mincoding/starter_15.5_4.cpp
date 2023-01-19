#include <iostream>

using namespace std;

int main()
{
	int juso[8] = {402, 401, 302, 301, 202, 201, 102, 101}, num, idx;
	char name[8][5] = {
		"KIM",
		"TEA",
		"SOM",
		"OPPO",
		"TOM",
		"GDK",
		"JAME",
		"MIN"
	};

	cin >> num;

	for (int i = 0; i < 8; i++)
	{
		if (juso[i] == num)
		{
			idx = i;
			break;
		}
	}

	cout << name[idx];

	return 0;
}