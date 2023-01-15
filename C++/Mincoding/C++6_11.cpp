#include <iostream>

using namespace std;

int main()
{
	char a, b;

	cin >> a >> b;

	for (int i = 0; i < 4; i++)
	{
		for (char j = a; j <= b; j++)
		{
			cout << j << ' ';
		}
		cout << endl;
	}
	
	return 0;
}