#include <iostream>

using namespace std;

char arr[2][4] = {
	"GKT",
	"PAC"
};

int isExist(char a, char b)
{
	bool flaga = false, flagb = false;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == a)
			{
				flaga = true;
			}
			if (arr[i][j] == b)
			{
				flagb = true;
			}
			if (flaga && flagb)
			{
				return 2;
			}
		}
	}
	if (flaga)
	{
		return 1;
	}
	if (flagb)
	{
		return 1;
	}
	return 0;
}

int main()
{
	char a, b;
	int ret;
	cin >> a >> b;

	ret = isExist(a, b);

	if (ret == 2)
	{
		cout << "대발견";
	}
	else if (ret == 1)
	{
		cout << "중발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}