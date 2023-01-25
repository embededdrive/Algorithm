#include <iostream>

using namespace std;

int main()
{
	int A[4], B[4], result[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> B[i];
	}

	for (int i = 0; i < 4; i++)
	{
		result[i] = A[i] + B[3 - i];
		cout << result[i] << ' ';
	}

	return 0;
}