#include <iostream>

using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int i = 1; i < 6; i++)
		{
			cout << i << ' ';
		}
		cout << endl;
	}

	return 0;
}