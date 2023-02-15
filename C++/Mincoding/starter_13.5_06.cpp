
#include <iostream>

using namespace std;

void FindABC(char arr1[50], char arr2[50], int *a, int *b, int *c)
{
	int cnta = 0, cntb = 0, cntc = 0;

	for (int i = 0; i < 50; i++)
	{
		if (arr1[i] == '\0')
		{
			break;
		}
		else if (arr1[i] == 'A') {
			cnta++;
		}
		else if (arr1[i] == 'B') {
			cntb++;
		}
		else if (arr1[i] == 'C') {
			cntc++;
		}
	}
	for (int i = 0; i < 50; i++)
	{
		if (arr2[i] == '\0')
		{
			break;
		}
		else if (arr2[i] == 'A') {
			cnta++;
		}
		else if (arr2[i] == 'B') {
			cntb++;
		}
		else if (arr2[i] == 'C') {
			cntc++;
		}
	}

	*a = cnta;
	*b = cntb;
	*c = cntc;
}

int main()
{
	char arr1[50], arr2[50];
	int a, b, c;

	cin >> arr1 >> arr2;

	FindABC(arr1, arr2, &a, &b, &c);

	cout << "A:" << a << endl;
	cout << "B:" << b << endl;
	cout << "C:" << c;

	return 0;
}