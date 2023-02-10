#include <iostream>

using namespace std;

struct robot
{
	int a, b;
	char text[11];
};

int main()
{
	robot robert;
	cin >> robert.a >> robert.b >> robert.text;

	robot* p = &robert;

	cout << p->a + p->b << ' ' << p->text;

	return 0;
}