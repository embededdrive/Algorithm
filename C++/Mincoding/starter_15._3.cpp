#include <iostream>

using namespace std;

int main()
{
	int arr[6];
	bool needReArrange = false;

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		int num = arr[i] - arr[i + 1];
		if (num < 0)
		{
			num *= -1;
		}

		if (num >= 3)
		{
			needReArrange = true;
		}
	}

	if (needReArrange)
	{
		cout << "재배치필요";
	}
	else {
		cout << "완벽한배치";
	}

	return 0;
}