#include <iostream>

using namespace std;

void parsing(string title)
{
	int a = 0;
	int b = 0;

	while (true)
	{
		a = title.find('[', a);
		if (a == -1) break;
		b = title.find(']', a + 1);

		int size = b - a - 1;

		if (size == 5)
		{
			string code = title.substr(a + 1, size);
			bool valid = true;
			for (int i = 0; i < 5; i++)
			{
				if (code[i] <= '0' && code[i] >= '9')
				{
					valid = false;
					break;
				}
			}
			if (valid)
			{
				cout << '[' << code << "]\n";
			}
		}

		a = b + 1;
	}
}

int main()
{
	int num;
	string title[10];

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> title[i];
	}

	for (int i = 0; i < num; i++)
	{
		parsing(title[i]);
	}

	return 0;
}