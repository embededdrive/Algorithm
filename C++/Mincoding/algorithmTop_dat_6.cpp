#include <iostream>

using namespace std;

int main()
{
	int type, len, num[1000], dat[10] = { 0 };
	bool dup = false;

	cin >> type >> len;

	for (int i = 0; i < len; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < len; i++)
	{
		dat[num[i]]++;
	}

	for (int i = 1; i <= 9; i++)
	{
		if (type == 1)
		{
			cout << i << ':' << dat[i] << "개\n";
		}
		else if (type == 2 && dat[i] > 1)
		{
			dup = true;
			break;
		}
	}

	if (type == 2)
	{
		if (dup) cout << "중복발견";
		else cout << "중복없음";
	}

	return 0;
}