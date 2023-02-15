#include <iostream>

using namespace std;

void checkChar(char target)
{
	if (target >= 'A' && target <= 'Z')
	{
		cout << "대";
	}
	else if (target >= 'a' && target <= 'z') {
		cout << "소";
	}
}

int main()
{
	char arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		checkChar(arr[i]);
	}

	return 0;
}