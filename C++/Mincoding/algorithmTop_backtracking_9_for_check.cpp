#include <iostream>
#include <string>

using namespace std;

bool isGood(string num) {
	int len = num.length();
	
	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			int size = j - i + 1;
			string sub = num.substr(i, size);

			int idx = 0;
			while (true)
			{
				int idx1 = num.find(sub, idx);
				int idx2 = num.find(sub, idx1 + 1);
				if (idx2 == -1) break;
				if (idx2 - idx1 == size)
				{
					return false;
				}
				idx = idx2;
			}
		}
	}
	return true;
}

int main()
{
	string input;

	cin >> input;

	if (isGood(input)) cout << "좋은 수열";
	else cout << "나쁜 수열";

	return 0;
}