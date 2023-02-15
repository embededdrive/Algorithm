#include <iostream>

using namespace std;

int main()
{
	int arr[7] = { 3, 4, 1, 3, 2, 7, 3 }, num;

	cin >> num;

	bool flag = false;

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == num)
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