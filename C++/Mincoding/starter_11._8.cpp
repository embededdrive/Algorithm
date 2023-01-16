#include <iostream>

using namespace std;

int main()
{
	char arr[13] = { 'S', 't', 'r', 'u', 'c', 't', 'P', 'o', 'i', 'n', 't', 'e', 'r'}, ch;
	bool flag = false;

	cin >> ch;

	for (int i = 0; i < 13; i++)
	{
		if (arr[i] == ch)
		{
			flag = true;
			break;
		}
	}

	if (flag)
	{
		cout << "발견";
	}
	else {
		cout << "미발견";
	}


	return 0;
}