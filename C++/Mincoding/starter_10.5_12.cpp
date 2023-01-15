#include <iostream>

using namespace std;

int yesOrNo()
{
	int num;

	cin >> num;

	if (num % 3 == 0)
	{
		return 7;
	}
	else if (num % 3 == 1)
	{
		return 35;
	}
	else {
		return 50;
	}
}

int main()
{
	cout << yesOrNo();

	return 0;
}