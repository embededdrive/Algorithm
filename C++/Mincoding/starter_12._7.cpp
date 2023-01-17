#include <iostream>

using namespace std;

int main()
{
	char arr[11], input[3];
	int count[3] = { 0 }, length;

	cin >> arr;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			length = i + 1;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (input[i] == arr[j])
			{
				count[i]++;
			}
		}
		cout << input[i] << '=' << count[i] << endl;
	}

	return 0;
}