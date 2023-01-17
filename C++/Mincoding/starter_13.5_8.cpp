
#include <iostream>

using namespace std;

int compare(char name1[10], char name2[10], char name3[10])
{
	for (int i = 0; i < 10; i++)
	{
		if (name1[i] == '\0')
		{
			return 1;
		}
		if (name1[i] != name2[i] || name1[i] != name3[i])
		{
			return 0;
		}
	}
}

int main()
{
	char name1[10], name2[10], name3[10];

	cin >> name1 >> name2 >> name3;

	if (compare(name1, name2, name3))
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}