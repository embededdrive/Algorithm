#include <iostream>

using namespace std;

void bbq(int lev)
{
	if (lev == 3)
	{
		return;
	}
	bbq(lev + 1);
}

int main()
{
	bbq(0);

	return 0;
}