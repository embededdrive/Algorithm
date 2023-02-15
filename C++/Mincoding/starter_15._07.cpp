#include <iostream>

using namespace std;

int main()
{
	char arr[7] = {
		'A', 'B', 'C', 'Z', 'E', 'T', 'Q'
	}, list[6];

	bool isOnVillage;

	cin >> list;

	for (int i = 0; i < 5; i++)
	{
		isOnVillage = false;
		for (int j = 0; j < 7; j++)
		{
			if (list[i] == arr[j])
			{
				isOnVillage = true;
				break;
			}
		}

		if (isOnVillage)
		{
			cout << list[i] << "=마을사람" << endl;
		}
		else {
			cout << list[i] << "=외부사람" << endl;
		}

	}

	return 0;
}