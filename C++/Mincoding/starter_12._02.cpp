#include <iostream>

using namespace std;

int main()
{
	char a[50], b[50];
	int numa, numb;

	cin >> a >> b;

	for (int i = 0; i < 50; i++)
	{
		if (a[i] == '\0')
		{
			numa = i;
			break;
		}
	}
	for (int i = 0; i < 50; i++)
	{
		if (b[i] == '\0')
		{
			numb = i;
			break;
		}
	}

	cout << numa << ' ' << numb;

	return 0;
}