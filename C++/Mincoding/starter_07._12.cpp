#include <iostream>

using namespace std;

int num;

void BBQ()
{
	if (num > 0 && num < 5)
	{
		cout << "초기값";
	}
	else if (num > 6 && num < 10)
	{
		cout << "중간값";
	}
	else {
		cout << "알수없는값";
	}
}

int main()
{
	cin >> num;

	if (num == 3 || num == 5 || num == 7)
	{
		for (int i = 1; i <= 10; i++)
		{
			cout << i;
		}
	}
	else if (num == 0 || num == 8) {
		for (int i = 10; i >= 1; i--)
		{
			cout << i;
		}
	}
	else {
		BBQ();
	}

	return 0;
}