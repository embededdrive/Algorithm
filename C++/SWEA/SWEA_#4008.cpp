#include <iostream>

using namespace std;

int n;
char operators[5] = "+-*/";
int numbers[12];

int operCnt[4];

char path[21];

int maxAns = -21e8;
int minAns = 21e8;

int calculate()
{
	int total = path[0] - '0';

	for (int i = 1; i < n + n - 2; i += 2)
	{
		char oper = path[i];
		int num = path[i + 1] - '0';

		if (oper == '+')
			total += num;
		else if (oper == '-')
			total -= num;
		else if (oper == '*')
			total *= num;
		else if (oper == '/')
			total /= num;
	}

	return total;
}

void dfs(int lev)
{
	if (lev == n + n - 1)
	{
		int ret = calculate();

		if (ret > maxAns)
			maxAns = ret;
		if (ret < minAns)
			minAns = ret;

		return;
	}


	if (lev % 2 == 0)
	{
		path[lev] = numbers[lev / 2] + '0';
		dfs(lev + 1);
		path[lev] = 0;
	}
	else {
		for (int i = 0; i < 4; i++)
		{
			if (operCnt[i] == 0)
				continue;
			else
				operCnt[i]--;

			path[lev] = operators[i];
			dfs(lev + 1);
			path[lev] = 0;
			operCnt[i]++;
		}
	}
}

int main()
{
	int tc;

	cin >> tc;

	for (int i = 1; i <= tc; i++)
	{
		maxAns = -21e8;
		minAns = 21e8;

		cin >> n;

		for (int i = 0; i < 4; i++)
			cin >> operCnt[i];

		for (int i = 0; i < n; i++)
			cin >> numbers[i];

		dfs(0);

		cout << '#' << i << ' ' << maxAns - minAns << '\n';
	}

	return 0;
}