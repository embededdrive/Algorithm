#include <iostream>

using namespace std;

int main()
{
	char arr[6] = { 'A', 'F', 'G', 'A', 'B', 'C' }, a, b;
	int num1 = 0, num2 = 0;

	cin >> a >> b;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == a)
		{
			num1++;
		}
		if (arr[i] == b)
		{
			num2++;
		}
	}

	if (num1 != 0 && num2 != 0)
	{
		cout << "와2개";
	}
	else if (num1 != 0 || num2 != 0) {
		cout << "오1개";
	}
	else {
		cout << "우0개";
	}

	return 0;
}