#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, idx = 0;
	vector<int> vec;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		vec.push_back(num);

		int size = vec.size();
		if (size >= 2)
		{
			if (vec[size - 1] == vec[size - 2] && vec[size - 1] == vec[size - 3])
			{
				vec.pop_back();
				vec.pop_back();
				vec.pop_back();
			}
		}
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}

	return 0;
}