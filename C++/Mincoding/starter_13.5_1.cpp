#include <iostream>

using namespace std;

int main()
{
	struct PROFILE
	{
		char name[8];
		int age;
		int weight;
	};

	PROFILE pr1, pr2;

	cin >> pr1.name >> pr1.age >> pr1.weight >> pr2.name >> pr2.age >> pr2.weight;

	cout << pr1.name << " & " << pr2.name << endl;
	cout << "평균" << (pr1.age + pr2.age) / 2 << "세" << endl;
	cout << "평균" << (pr1.weight + pr2.weight) / 2 << "KG";

	return 0;
}