#include <iostream>

using namespace std;

int main()
{
	int arr[8] = { 4, 3, 6, 1, 3, 1, 5, 3 }, num, count = 0;

	cin >> num;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == num)
		{
			count++;
		}
	}

	cout << "숫자" << num << "개수는" << count << "개";

	return 0;
}