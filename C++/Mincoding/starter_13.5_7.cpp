
#include <iostream>

using namespace std;

char arr[3][3] = {
	'D', 'A', 'S',
	'Q', 'W', 'V',
	'R', 'T', 'Y'
};

void Find(int y1, int x1, int y2, int x2, char* c1, char* c2)
{
	*c1 = arr[y1][x1];
	*c2 = arr[y2][x2];
}

int main()
{
	int y1, x1, y2, x2;
	char c1, c2;

	cin >> y1 >> x1 >> y2 >> x2;

	Find(y1, x1, y2, x2, &c1, &c2);

	cout << c1 << ' ' << c2;

	return 0;
}