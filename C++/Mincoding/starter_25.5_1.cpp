#include <iostream>
#include <string>

using namespace std;

string input;

int main()
{
	int sum = 0, plusidx = 0, minusidx = 0, prev = 0, coper, noper;

	cin >> input;

	if (input[0] != '-')
	{
		coper = 1;
	}
	else
	{
		prev = 1;
		coper = -1;
	}

	while (true)
	{
		plusidx = input.find('+', prev);
		minusidx = input.find('-', prev);
		int next, num;

		if (plusidx == -1 && minusidx == -1) {
			next = input.length();
			num = stoi(input.substr(prev, next - prev));
			sum += num * coper;
			break;
		}
		else if (plusidx == -1) {
			noper = -1;
			next = minusidx;
		}
		else if (minusidx == -1) {
			noper = 1;
			next = plusidx;
		}
		else {
			if (plusidx < minusidx)
			{
				noper = 1;
				next = plusidx;
			}
			else {
				noper = -1;
				next = minusidx;
			}
		}
		num = stoi(input.substr(prev, next - prev));

		sum += num * coper;
		coper = noper;

		prev = next + 1;
	}

	cout << sum;

	return 0;
}