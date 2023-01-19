#include <iostream>

using namespace std;

int main()
{
	struct Product
	{
		char name[5];
		int size;
		int prize;
	};

	Product a, b;

	cin >> a.name >> a.size >> a.prize >> b.name >> b.size >> b.prize;

	cout << a.name << ',' << b.name << endl;
	cout << "AverageSize=" << (a.size + b.size) / 2 << endl;
	cout << "AveragePrice=" << (a.prize + b.prize) / 2;

	return 0;
}