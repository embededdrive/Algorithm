#include <iostream>

using namespace std;

int getLength(char arr[50])
{
	int idx;
	for (int i = 0; i < 50; i++)
	{
		if (arr[i] == '\0')
		{
			idx = i;
		}
	}
	return idx;
}

int main()
{
	char a[50], b[50], c[50];
	int num[3];

	cin >> a >> b >> c;

	num[0] = getLength(a);
	num[1] = getLength(b);
	num[2] = getLength(c);

	if (num[0] >= num[1] && num[0] > num[2])
	{
		cout << a;
	}
	else if (num[1] >= num[0] && num[1] >= num[2])
	{
		cout << b;
	}
	else {
		cout << c;
	}

	return 0;
}