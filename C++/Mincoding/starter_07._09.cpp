#include <iostream>

using namespace std;

int main()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		string test;
		if (arr[i] >= 70)
		{
			test = "PASS";
		}
		else if (arr[i] >= 50) {
			test = "RETEST";
		}
		else {
			test = "FAIL";
		}
		cout << i + 1 << "번사람은" << arr[i] << "점" << test << endl;
	}

	return 0;
}