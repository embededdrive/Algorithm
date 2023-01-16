#include <iostream>

using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << num;
		}
		cout << endl;
		num--;
	}

	return 0;
}