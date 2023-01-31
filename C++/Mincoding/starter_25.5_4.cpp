#include <iostream>
#include <string>

using namespace std;

/*

2023.##.31
3가지

2023.1#.31
3가지

2023.#.31
9가지

2023.12.##
21가지

2023.12.#1
[1의 자리가 2~9] 10의 자리 : 2가지
[1의 자리가 0~1] 10의 자리 : 3가지

2023.12.3#
[10의 자리가 1~2] : 10가지
[10의 자리가 3] : 2가지

2023.12.#
9가지

*/

int main()
{
	string str, date[3];
	int monthCase = 1, dateCase = 1;

	cin >> str;

	str += '.';

	int prev = 0;
	int next, i = 0;

	while (true)
	{
		next = str.find('.', prev);
		if (next == -1) break;
		
		int size = next - prev;
		date[i++] = str.substr(prev, size);

		prev = next + 1;
	}

	next = date[1].find('X');
	if (next != -1)
	{
		int len = date[1].length();
		if (len == 1) monthCase = 9;
		else {
			monthCase = 12;
		}
	}

	next = date[2].find('X');
	if (next != -1)
	{
		int len = date[2].length();
		if (len == 1) dateCase = 9;
		else {
			if (date[2][0] == 'X' && date[2][1] == 'X') dateCase = 31;
			else if (date[2][0] == 'X') {
				if (date[2][1] > '1') dateCase = 2;
				else dateCase = 3;
			}
			else if (date[2][1] == 'X') {
				if (date[2][0] == '3') dateCase = 2;
				else dateCase = 10;
			}
		}
	}

	cout << monthCase * dateCase;

	return 0;
}