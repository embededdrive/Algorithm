#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, size;
	int leak[1000];

	cin >> n >> size;

	for (int i = 0; i < n; i++)
	{
		cin >> leak[i];
	}

	sort(leak + 0, leak + n, less<int>());

	int idx = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (leak[i] > idx)
		{
			cnt++;
			idx = leak[i] + size - 1;
		}
	}

	cout << cnt;

	return 0;
}