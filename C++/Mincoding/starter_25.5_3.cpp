#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	bool isOk = true;
	int len, dat[256] = { 0, };

	cin >> str;

	len = str.length();

	while (true)
	{
		int ret = str.find("bad", 0);
		if (ret != -1) {
			isOk = false;
			break;
		}
		ret = str.find("no", 0);
		if (ret != -1) {
			isOk = false;
			break;
		}
		ret = str.find("puck", 0);
		if (ret != -1) {
			isOk = false;
			break;
		}

		int idx = 0;
		while (true)
		{
			idx = str.find("__", idx);
			if (idx == -1) break;
			

			int size = 0;
			for (int i = idx; i < len; i++)
			{
				if (str[i] != '_') break;
				size++;
			}

			if (size > 5) {
				isOk = false;
				break;
			}
			idx += size;
		}

		for (int i = 0; i < len; i++)
		{
			dat[str[i]]++;
			if (dat[str[i]] > 5 && str[i] != '_') {
				isOk = false;
				break;
			}
		}

		for (char i = '0'; i <= '9'; i++)
		{
			if (dat[i] != 0) isOk = false;
		}
		break;
	}
	
	if (isOk)
	{
		cout << "pass";
	}
	else {
		cout << "fail";
	}

	return 0;
}