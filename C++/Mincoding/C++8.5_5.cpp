#include <iostream>

using namespace std;

int main()
{
	char a, b;
	int num;

	cin >> a >> b >> num;

	for (int i = 0; i < num; i++)
	{
		for (char j = a; j <= b; j++)
		{
			cout << j;
		}
		cout << endl;
	}


	return 0;
}