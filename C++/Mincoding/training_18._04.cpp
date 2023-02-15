#include <iostream>

using namespace std;

int main()
{
	char cardlist[16], DAT[100] = { 0 };
	int cnt = 0;

	cin >> cardlist;

	for (int i = 0; i < 12; i++)
	{
		if (cardlist[i] == '\0')
		{
			break;
		}
		else {
			DAT[cardlist[i]]++;
		}
	}

	for (int i = 65; i <= 90; i++)
	{
		if (DAT[i] != 0)
		{
			cnt++;
		}
	}

	cout << cnt << "개";

	return 0;
}