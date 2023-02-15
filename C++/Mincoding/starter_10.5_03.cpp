#include <iostream>

using namespace std;

int main()
{
	struct Fruit {
		int size;
		int price;
	};

	Fruit banana, apple;

	cin >> banana.size >> apple.size;

	banana.price = banana.size * 250;
	apple.price = apple.size * 500;

	cout << banana.price + apple.price << "원";

	return 0;
}