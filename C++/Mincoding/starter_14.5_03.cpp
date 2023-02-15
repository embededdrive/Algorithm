#include <iostream>

using namespace std;

int main()
{
	int num, inner = 1, outer = 1;

	cin >> num;

	while (outer <= 3)
	{
		while (inner <= 5)
		{
			cout << num;
			inner++;
		}
		inner = 1;
		cout << endl;
		outer++;
	}

	return 0;
}