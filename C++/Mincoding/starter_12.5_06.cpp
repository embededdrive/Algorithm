#include <iostream>

using namespace std;

int main()
{
	char vect[100];
	int idx, num = 0;

	cin >> vect;
	for (int i = 0; i < 100; i++)
	{
		if (vect[i] == '\0')
		{
			idx = i;
			break;
		}
	}

	for (int i = 0; i < idx; i++)
	{
		if (vect[i] == vect[idx - 1])
		{
			num++;
		}
	}

	cout << idx << endl << num;

	return 0;
}