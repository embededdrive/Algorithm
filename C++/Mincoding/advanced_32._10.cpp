#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int nums[10][10], bits[10][10];
int dat[10];

bool cmp(int left, int right)
{
	if (dat[left] > dat[right])
		return true;
	if (dat[left] < dat[right])
		return false;
	return left < right;
}

int main()
{
	int n;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> nums[i][j];
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> bits[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (bits[i][j] == 1)
			{
				v.push_back(nums[i][j]);
				dat[nums[i][j]]++;
			}
		}		
	}
	
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';

	return 0;
}