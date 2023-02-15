#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

vector<int> arr;

void push(int num) {
	arr.push_back(num);
}

void printLast() {
	cout << arr[arr.size() - 1] << '\n';
}

void pop() {
	arr.pop_back();
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char cmd[10];
		int num;

		cin >> cmd;

		if (strcmp(cmd,"push") == 0)
		{
			cin >> num;
			push(num);
		} else if (strcmp(cmd, "printLast") == 0)
		{
			printLast();
		} else if (strcmp(cmd, "pop") == 0)
		{
			pop();
		}
	}

	return 0;
}