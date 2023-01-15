#include <iostream>

using namespace std;

int main()
{
	char ch;
	int num;

	cin >> ch >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cout << ch;
		}
		cout << endl;
	}

	return 0;
}