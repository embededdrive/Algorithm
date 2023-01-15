#include <iostream>

using namespace std;

int main()
{
	char arr[3];
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			count++;
		}
	}

	if (count == 3)
	{
		cout << "풍족하다";
	}
	else if (count >= 1 && count <= 2) {
		cout << "적절하다";
	}
	else {
		cout << "부족하다";
	}

	return 0;
}