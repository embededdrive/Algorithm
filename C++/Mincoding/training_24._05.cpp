#include <iostream>

using namespace std;

int main()
{
	string call[5];
	int cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> call[i];
	}

	for (int i = 0; i < 5; i++)
	{
		int idx = -1;
		while (true)
		{
			idx = call[i].find("MCD", idx + 1);
			if (idx == -1) break;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}