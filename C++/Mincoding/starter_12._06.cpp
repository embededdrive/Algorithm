#include <iostream>

using namespace std;

char arr[9] = { 'M', 'I', 'N', 'Q', 'U', 'E', 'S', 'T' };

int Length(char ch)
{
	int idx = 8;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == ch)
		{
			idx = i;
		}
	}
	return idx;
}

int main()
{
	char input[3];
	int index;

	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 3; i++)
	{
		index = Length(input[i]);
		cout << input[i] << '=' << index << endl;
	}

	return 0;
}