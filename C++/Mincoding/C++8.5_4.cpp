#include <iostream>

using namespace std;

char a, b, c;

void input()
{
	cin >> a >> b >> c;
}

int main()
{
	char arr[17];

	input();

	for (int i = 0; i < 17; i++)
	{
		if (i <= 6)
		{
			arr[i] = a;
		}
		else if (i <= 12)
		{
			arr[i] = b;
		}
		else {
			arr[i] = c;
		}
	}

	for (int i = 16; i >= 0; i--)
	{
		cout << arr[i];
	}


	return 0;
}