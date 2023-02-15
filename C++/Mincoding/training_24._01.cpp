#include <iostream>

using namespace std;

int main()
{
	string name;
	int len;

	cin >> name;
	
	cout << name << '\n';
	
	len = name.length();

	for (int i = 0; i < len / 2; i++)
	{
		char temp = name[i];
		name[i] = name[len - 1 - i];
		name[len - 1 - i] = temp;
	}
	
	cout << name;

	return 0;
}