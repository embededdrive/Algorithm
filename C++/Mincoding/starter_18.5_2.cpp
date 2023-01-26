#include <iostream>

using namespace std;

int main()
{
	int arr[6], dat[256] = { 0 };
	bool isExist = false;

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 6; i++)
	{
		dat[arr[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		if (dat[i] >= 2)
		{
			isExist = true;
			break;
		}
	}

	if (isExist)
	{
		cout << "도플갱어 발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}