#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	for (int i = 0; i < n - 2; i++)
	{
		if (vec[i] == vec[i + 1] && vec[i] == vec[i + 2])
		{
			vec.erase(vec.begin(), vec.begin() + 2);
		}
	}

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}

	return 0;
}