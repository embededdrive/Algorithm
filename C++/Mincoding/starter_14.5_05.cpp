#include <iostream>

using namespace std;

int main()
{
	char sen1[6], sen2[6], arr[11], temp;
	int size1, size2;

	cin >> sen1 >> sen2;

	for (int i = 0; i < 6; i++)
	{
		if (sen1[i] == '\0')
		{
			size1 = i;
			break;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		if (sen2[i] == '\0')
		{
			size2 = i;
			break;
		}
	}

	for (int i = 0; i < size1; i++)
	{
		for (int j = i + 1; j < size1; j++)
		{
			if (sen1[i] > sen1[j])
			{
				temp = sen1[i];
				sen1[i] = sen1[j];
				sen1[j] = temp;
			}
		}
	}

	for (int i = 0; i < size2; i++)
	{
		for (int j = i + 1; j < size2; j++)
		{
			if (sen2[i] > sen2[j])
			{
				temp = sen2[i];
				sen2[i] = sen2[j];
				sen2[j] = temp;
			}
		}
	}

	for (int i = 0; i < size1; i++)
	{
		arr[i] = sen1[i];
	}

	for (int i = 0; i < size2; i++)
	{
		arr[size1 + i] = sen2[i];
	}

	arr[size1 + size2] = '\0';

	for (int i = 0; i < size1 + size2; i++)
	{
		cout << arr[i];
	}

	return 0;
}