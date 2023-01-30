#include <iostream>

using namespace std;

int main()
{
	string str, words[10];


	cin >> str;

	str += '_';

	int a = 0;
	int b = 0;
	int t = 0;

	while (true)
	{
		b = str.find("_", a);
		if (b == -1) break;
		
		int size = b - a;

		if (size != 0)
		{
			words[t++] = str.substr(a, size);
		}

		a = b + 1;
	}

	for (int i = 0; i < t; i++)
	{
		cout << i + 1 << '#' << words[i] << '\n';
	}

	return 0;
}