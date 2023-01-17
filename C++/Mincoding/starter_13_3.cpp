#include <iostream>

using namespace std;

int stringLen(char arr[50])
{
	int idx = 50;

	for (int i = 0; i < 50; i++)
	{
		if (arr[i] == '\0')
		{
			idx = i;
			break;
		}
	}

	return idx;
}

int main()
{
	char arr[50];
	int num;

	cin >> arr;

	num = stringLen(arr);

	cout << num << "글자";

	return 0;
}