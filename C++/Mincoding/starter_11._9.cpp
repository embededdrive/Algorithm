#include <iostream>

using namespace std;

int main()
{
	char arr[8], big[8], small[8];
	int numb = 0, nums = 0;


	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			big[numb++] = arr[i];
		}
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			small[nums++] = arr[i];
		}
	}

	cout << "big=";

	for (int i = 0; i < numb; i++)
	{
		cout << big[i];
	}

	cout << "\nsmall=";

	for (int i = 0; i < nums; i++)
	{
		cout << small[i];
	}

	return 0;
}

