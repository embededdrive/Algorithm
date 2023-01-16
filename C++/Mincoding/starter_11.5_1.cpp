#include <iostream>

using namespace std;

int main()
{
	char ch[6] = {'D', 'F', 'G', 'D', 'A', 'Q'}, a, b;
	bool find = false;

	cin >> a >> b;

	for (int i = 0; i < 6; i++)
	{
		for (char j = a; j <= b; j++)
		{
			if (ch[i] == j)
			{
				cout << "발견!!!";
				find = true;
				break;
			}
		}
		if (find)
		{
			break;
		}
	}
	
	if (!find)
	{
		cout << "미발견!!!";
	}

	return 0;
}