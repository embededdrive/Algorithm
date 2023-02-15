#include <iostream>

using namespace std;

int main()
{
	int a, b, big, small;
	
	cin >> a >> b;

	if (a > b)
	{
		big = a;
		small = b;
	}
	else {
		big = b;
		small = a;
	}

	if ((big - small) % 2 == 1)
	{
		cout << "고백한다";
	}
	else {
		cout << "짝사랑만";
	}

	return 0;
}