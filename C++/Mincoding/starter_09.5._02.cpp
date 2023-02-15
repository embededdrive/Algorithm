#include <iostream>

using namespace std;

int main()
{
	char arr[5];
	int count = 0, idx[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == 'A')
		{
			idx[count] = i;
			count++;
		}
	}

	cout << "문자A는 " << count << "개발견" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << idx[i] << "번" << endl;
	}

	return 0;
}