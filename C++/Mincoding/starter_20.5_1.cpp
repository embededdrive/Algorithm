#include <iostream>

using namespace std;

void BBQ(int lev)
{
	if (lev == 2) return;
	BBQ(lev + 1);
}

int main()
{
	BBQ(0);

	return 0;
}