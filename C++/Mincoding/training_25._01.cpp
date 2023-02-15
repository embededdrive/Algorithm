#include <iostream>

using namespace std;

string before, after;

void replaceAtoB(string a, string b)
{
	int idx = -1;
	int lastidx = 0;

	int origsize = before.length();
	int asize = a.length();

	while (true)
	{
		idx = before.find(a, idx + 1);
		if (idx == -1) {
			after += before.substr(lastidx, origsize);
			break;
		}

		after += before.substr(lastidx, idx - lastidx);
		lastidx = idx + asize;
		after += b;
	}
}

int main()
{
	cin >> before;

	string table[5][2] = {
		{"KFC", "#BBQ#"},
		{"MC", "#BBQ#"},
		{"BICMAC", "#MACBOOK#"},
		{"SHACK", "#SHOCK#"},
		{"SONY", "#NONY#"}
	};
	
	for (int i = 0; i < 5; i++)
	{
		replaceAtoB(table[i][0], table[i][1]);
		before = after;
		after = "";
	}

	cout << before;

	return 0;
}