#include <iostream>
#include <string>

using namespace std;

int isPossible(string ref, string target)
{
	int reflen = ref.length();
	int targetlen = target.length();

	if (reflen != targetlen) return 0;
	if (target[0] != 'X' && target[0] != ref[0]) return 0;
	if (targetlen == 1) return 1;
	
	if (target[1] != 'X' && target[1] != ref[1]) return 0;
	return 1;
}

int checkMonth(string m)
{
	int cnt = 0;
	for (int i = 1; i <= 12; i++)
	{
		string mon = to_string(i);
		int ret = isPossible(mon, m);
		if (ret == 1) cnt++;
	}
	return cnt;
}

int checkDay(string d)
{
	int cnt = 0;
	for (int i = 1; i <= 31; i++)
	{
		string day = to_string(i);
		int ret = isPossible(day, d);
		if (ret == 1) cnt++;
	}
	return cnt;
}

int main()
{
	string str, month, day;
	int monthCase = 1, dateCase = 1;

	cin >> str;

	int idx = str.find('.', 5);
	month = str.substr(5, idx - 5);
	day = str.substr(idx + 1);

	int a = checkMonth(month);
	int b = checkDay(day);

	cout << a * b;

	return 0;
}