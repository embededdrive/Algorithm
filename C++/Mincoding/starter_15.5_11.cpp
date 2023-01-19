#include <iostream>

using namespace std;

int main()
{
	char arr[7] = "APPLET", input[5];
	int num = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i] == input[j])
			{
				num++;
			}
		}
	}

	cout << num << "개 맞추었습니다";

	return 0;
}