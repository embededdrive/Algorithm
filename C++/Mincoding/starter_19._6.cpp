#include <iostream>

using namespace std;

int main()
{
	struct Train
	{
		int win;
		char name[9];
	};

	Train train[7] = {
		15, "summer",
		33, "cloe",
		24, "summer",
		28, "niki",
		32, "jenny",
		20, "summer",
		40, "coco"
	};

	char name[9];
	int age, len, idx;
	bool isSame;

	cin >> name >> age;

	for (int i = 0; i < 9; i++)
	{
		if (name[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = 0; i < 7; i++)
	{
		isSame = true;
		for (int j = 0; j < len; j++)
		{
			if (train[i].name[j] != name[j])
			{
				isSame = false;
				break;
			}
		}
		if (train[i].win != age)
		{
			isSame = false;
		}
		if (isSame)
		{
			idx = i;
			break;
		}
	}

	cout << idx;

	return 0;
}