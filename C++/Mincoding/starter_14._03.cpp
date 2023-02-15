#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	struct FileDown
	{
		int a, b;
	};

	FileDown dn;

	cin >> dn.a >> dn.b;

	while (true)
	{
		if (dn.a >= 100 && dn.b >= 100)
		{
			break;
		}
		if (dn.a < 100)
		{
			dn.a++;
		}
		if (dn.b < 100)
		{
			dn.b++;
		}
		num++;
	}

	cout << num;

	return 0;
}