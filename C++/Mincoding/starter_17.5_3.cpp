#include <iostream>

using namespace std;

int isSame(char name1[11], char name2[11])
{
	for (int i = 0; i < 11; i++)
	{
		if (name1[i] != name2[i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char name1[11] = { '\0' }, name2[11] = { '\0' };
	int ret;

	cin >> name1 >> name2;

	if (isSame(name1, name2))
	{
		cout << "동명";
	}
	else {
		cout << "남남";
	}

	return 0;
}