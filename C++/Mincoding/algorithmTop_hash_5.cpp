#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

struct User {
	int password;
	bool loggedIn;
};

int main()
{
	int n, cnt = 0, logInCnt = 0;
	unordered_map<string, User> um;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string cmd, id;
		int pwd, newpwd;

		cin >> cmd;

		if (cmd == "reg")
		{
			cin >> id >> newpwd;
			if (um.find(id) == um.end())
			{
				um[id] = { newpwd, false };
				cnt++;
				cout << "welcome " << cnt << '\n';
			}
			else {
				cout << "reg fail\n";
			}
		}
		else if (cmd == "login")
		{
			cin >> id >> pwd;
			if (um.find(id) == um.end())
			{
				cout << "login fail\n";
			}
			else {
				if (um[id].password != pwd)
				{
					cout << "login fail\n";
				}
				else if (um[id].loggedIn == true) {
					cout << "login fail\n";
				}
				else {
					logInCnt++;
					um[id].loggedIn = true;
					cout << "login " << logInCnt << '\n';
				}
			}
		}
		else if (cmd == "change")
		{
			cin >> id >> pwd >> newpwd;
			if (um.find(id) == um.end())
			{
				cout << "change fail\n";
			}
			else {
				if (um[id].password != pwd)
				{
					cout << "change fail\n";
				}
				else {
					um[id].password = newpwd;
					cout << "success\n";
				}
			}
		}
		else if (cmd == "logout")
		{
			cin >> id;
			if (um.find(id) == um.end())
			{
				cout << "logout fail\n";
			}
			else {
				if (um[id].loggedIn == false)
				{
					cout << "logout fail\n";
				}
				else {
					logInCnt--;
					um[id].loggedIn = false;
					cout << "logout " << logInCnt << '\n';
				}
			}
		}
		else if (cmd == "bye")
		{
			cin >> id;
			if (um.find(id) == um.end())
			{
				cout << "bye fail\n";
			}
			else if (um[id].loggedIn == false) {
				cout << "bye fail\n";
			}
			else {
				um.erase(id);
				cnt--;
				logInCnt--;
				cout << "bye " << cnt << '\n';
			}
		}
	}

	return 0;
}