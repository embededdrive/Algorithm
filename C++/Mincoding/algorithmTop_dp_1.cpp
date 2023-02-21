#include <iostream>

using namespace std;

int memo[100];

int fibo(int index)
{
	if (index == 1)
		return 0;
	if (index == 2)
		return 1;
	if (memo[index != 0])
		return memo[index];

	int a = fibo(index - 1);
	int b = fibo(index - 2);

	memo[index] = a + b;

	return a + b;
}

int main() {
	int n;

	cin >> n;

	cout << fibo(n);

	return 0;
}