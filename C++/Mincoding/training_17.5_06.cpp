#include <iostream>

using namespace std;

bool isSame(int arr1[4], int arr2[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (arr1[i] != arr2[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int password[4] = {3, 7, 4, 9}, input[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	if (isSame(password, input))
	{
		cout << "pass";
	}
	else {
		cout << "fail";
	}

	return 0;
}