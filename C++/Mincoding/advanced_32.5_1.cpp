#include<iostream>
#include <vector>

using namespace std;

char words[6][5] = {
	"ABCD",
	"ABCE",
	"AGEH",
	"EIEI",
	"FEQE",
	"ABAD"
};

int main()
{
	char search[5];
	bool flag[6];

	cin >> search;

	for (int i = 0; i < 6; i++)
		flag[i] = true;

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 6; j++)
			if (search[i] != '?' && search[i] != words[j][i])
				flag[j] = false;

	int sum = 0;
	for (int i = 0; i < 6; i++)
		if (flag[i])
			sum++;

	cout << sum;

	return 0;
}