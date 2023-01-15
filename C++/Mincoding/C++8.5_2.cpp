#include <iostream>

using namespace std;

int main()
{
	char arr[6] = { 'D', 'T', 'A', 'B', 'W', 'Q' }, ch;
	
	cin >> ch;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == ch)
		{
			cout << i << "번 INDEX";
			break;
		}
	}

	return 0;
}