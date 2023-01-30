#include <iostream>

using namespace std;

int main()
{
	string ch, sen[100];
	int num;

	cin >> ch >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> sen[i];
	}

	for (int i = 0; i < num; i++)
	{
		int ret;
		ret = sen[i].find(ch);

		if (ret == -1)
		{
			cout << "X\n";
		}
		else {
			cout << "O\n";
		}
	}

	return 0;
}