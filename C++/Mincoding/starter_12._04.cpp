#include <iostream>

using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cout << j;
		}
		cout << endl;
	}

	return 0;
}