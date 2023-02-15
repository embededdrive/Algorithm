#include <iostream>
using namespace std;

string str;
string emails[10], names[10], domains[10];
int cnt = 0;

void splitemails()
{
    int idx = 0;

    str += '|';

    int prev = 0;
    int next;
    while (true)
    {
        next = str.find('|', prev);
        if (next == -1) break;

        int size = next - prev;
        emails[idx++] = str.substr(prev, size);
        cnt++;

        prev = next + 1;
    }
}

void getname()
{
    for (int i = 0; i < cnt; i++)
    {
        int idx = 0;
        idx = emails[i].find('@', idx);
        names[i] = emails[i].substr(0, idx);
    }
}

void getdomain()
{
    for (int i = 0; i < cnt; i++)
    {
        int prev;
        int next;
        int len;
        prev = emails[i].find('@', 0);
        next = emails[i].find('.', 0);
        
        len = next - prev - 1;
        domains[i] = emails[i].substr(prev + 1, len);
    }
}

int main()
{
    cin >> str;

    splitemails();
    getname();
    getdomain();

    for (int i = 0; i < cnt; i++)
    {
        if (domains[i] != "invalid") cout << "[#" << names[i] << "] " << domains[i] << '\n';
    }

    return 0;
}
