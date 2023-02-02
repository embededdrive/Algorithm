#include <iostream>

using namespace std;

int number[5], cnt;

void run(int lev, int sum)
{
	if (lev == 5)
	{
		if (sum >= 10 && sum <= 20)
		{
			cnt++;
		}
		
		return;
	}

	run(lev + 1, sum + number[lev]);
	run(lev + 1, sum);
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> number[i];
	}

	run(0, 0);

	cout << cnt;

    return 0;
}