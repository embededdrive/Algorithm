#include <iostream>

using namespace std;

void KFC(int* upper, int* lower)
{
	int ucnt = 0, lcnt = 0;
	char arr[11];

	cin >> arr;

	for (int i = 0; i < 11; i++)
	{

		if (arr[i] != '\0')
		{
			if (arr[i] >= 'A' && arr[i] <= 'Z')
			{
				ucnt++;
			}
			else if (arr[i] >= 'a' && arr[i] <= 'z')
			{
				lcnt++;
			}
		}
		else {
			break;
		}
	}

	*upper = ucnt;
	*lower = lcnt;
}

int main()
{
	int upper, lower;

	KFC(&upper, &lower);

	cout << "대문자" << upper << "개" << endl;
	cout << "소문자" << lower << "개";

	return 0;
}