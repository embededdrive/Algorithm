#include <iostream>

using namespace std;

string a, b;
int alen, blen;

int getSameSize(int i, int j)
{
	int size = 0;

	while (true)
	{
		if (i >= alen || j >= blen) break;
		if (a[i] != b[j]) break;
		i++;
		j++;
		size++;
	}

	return size;
}

int main()
{
	int maxLength = 0, maxIdx;
	
	cin >> a >> b;

	alen = a.length();
	blen = b.length();

	for (int i = 0; i < alen; i++)
	{
		for (int j = 0; j < blen; j++)
		{
			int ret = getSameSize(i, j);

			if (ret > maxLength)
			{
				maxLength = ret;
				maxIdx = i;
			}
		}
	}

	for (int i = 0; i < maxLength; i++)
	{
		cout << a[i + maxIdx];
	}

	return 0;
}