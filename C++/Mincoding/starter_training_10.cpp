#include <iostream>

using namespace std;

int main()
{
	char mat[3][6] = {
		"FRQWT",
		"GASYQ",
		"ASADB"
	};

	int num;

	cin >> num;

	for (int i = 0; i < 3; i++)
	{
		cout << mat[i][num];
	}

	return 0;
}