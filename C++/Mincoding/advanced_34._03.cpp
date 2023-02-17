#include <iostream>
#include <algorithm>

using namespace std;

string books[100000];
int n;

bool bs(string book, int time)
{
	int left = 0;
	int right = n - 1;

	while (left <= right && time > 0)
	{
		time--;

		int mid = (left + right) / 2;

		if (books[mid] == book) {
			return true;
		}
		else if (books[mid] < book) {
			left = mid + 1;
		}
		else if (books[mid] > book) {
			right = mid - 1;
		}
	}

	return false;
}

int main()
{
	int m;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> books[i];
	}

	sort(books + 0, books + n);

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		string book;
		int time;

		cin >> book >> time;

		bool ret = bs(book, time);

		if (ret)
			cout << "pass\n";
		else
			cout << "fail\n";
	}

	return 0;
}