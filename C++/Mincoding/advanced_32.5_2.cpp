#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char alphabet[11];
	char dash[11] = "__________";

	cin >> alphabet;

	int len = strlen(alphabet);

	dash[len] = '\0';

	while (strcmp(dash, alphabet))
	{
		cout << alphabet << '\n';

		for (int i = 0; i < len; i++)
		{
			if (alphabet[i] > 'A' && alphabet[i] <= 'Z')
			{
				alphabet[i] -= 1;
			}
			else {
				alphabet[i] = '_';
			}
		}
	}

	cout << alphabet << '\n';

	return 0;
}