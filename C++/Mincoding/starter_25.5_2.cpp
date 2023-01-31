#include <iostream>
#include <string>

using namespace std;

string input;
int len, idx = 0, ans = 0;

int findStart(int index)
{
	for (int i = index; i < len; i++)
	{
		if (input[i] == '[' || input[i] == '{') return i;
	}
	return -1;
}

int findEnd(int index)
{
	for (int i = index; i < len; i++)
	{
		if (input[i] == ']' || input[i] == '}') return i;
	}
	return -1;
}

void calc(int a, int b)
{
	if (input[a] == '[') ans += stoi(input.substr(a + 1, b - a - 1));
	else ans *= stoi(input.substr(a + 1, b - a - 1));
}

int main()
{
	cin >> input;
	len = input.length();

	while (true)
	{
		int a, b;
		a = findStart(idx);
		idx = a;
		if (a == -1) break;
		b = findEnd(idx);
		idx = b;
		if (b == -1) break;

		calc(a, b);
	}

	cout << ans;

	return 0;
}