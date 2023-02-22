#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, idx = 0;
	int vec[100];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> vec[idx];

		if (idx >= 2)
			if (vec[idx] == vec[idx - 1] && vec[idx] == vec[idx - 2])
				idx = idx - 3;
		idx++;
	}

	sort(vec + 0, vec + idx);

	for (int i = 0; i < idx; i++)
	{
		cout << vec[i] << ' ';
	}

	return 0;
}