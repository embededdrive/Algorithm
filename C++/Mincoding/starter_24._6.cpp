#include <iostream>

using namespace std;

int main()
{
	string logmessage;
	int pass = 0, fail = 0, idx;

	cin >> logmessage;
	
	for (int i = 0; i < logmessage.length(); i++)
	{
		if (logmessage[i] > 'Z')
		{
			logmessage[i] = logmessage[i] - 'a' + 'A';
		}
	}

	idx = -1;
	while (true)
	{
		idx = logmessage.find("PASS", idx + 1);
		if (idx == -1) break;
		pass++;
	}
	idx = -1;
	while (true)
	{
		idx = logmessage.find("FAIL", idx + 1);
		if (idx == -1) break;
		fail++;
	}
	
	cout << (pass * 100) / (pass + fail) << '%';

	return 0;
}