#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, arr[100000];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int sum = arr[0] + arr[1] + arr[2] + arr[3];
	int min = sum;
	
	for (int i = 0; i <= n - 4; i++)
	{
		if (sum < min) min = sum;
		
		if (i == n - 3) break;

		sum += arr[i + 4];
		sum -= arr[i];
	}

	cout << min;

	return 0;
}