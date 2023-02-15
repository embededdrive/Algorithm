#include <iostream>

using namespace std;

string emails, vect[10];
int cnt = 0;

void split()
{
	int prev = 0;
	int next;

	while (true)
	{
		next = emails.find('|', prev);
		if (next == -1)
		{
			next = emails.length();
			int size = next - prev;
			vect[cnt++] = emails.substr(prev, size);
			break;
		}

		int size = next - prev;
		vect[cnt++] = emails.substr(prev, size);

		prev = next + 1;
	}
}

int main()
{
	cin >> emails;

	split();

	for (int i = 0; i < cnt; i++)
	{
		string name, domain;
		int seppos;
		int dotpos;

		seppos = vect[i].find('@');
		name = vect[i].substr(0, seppos);

		dotpos = vect[i].find('.', seppos);
		domain = vect[i].substr(seppos + 1, dotpos - seppos - 1);

		cout << "[#" << name << "] " << domain << '\n';
	}


	return 0;
}