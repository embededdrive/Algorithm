#include <iostream>

using namespace std;

int main()
{
	char arr[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	if (arr[0] > arr[1] && arr[0] > arr[2])
	{
		cout << "옳다" << arr[0];
	}
	else {
		cout << "옳지않음";
	}

	return 0;
}