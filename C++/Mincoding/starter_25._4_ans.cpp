#include <iostream>
#include <string>
using namespace std;

string str;

void removedup(char ch)
{
    int a = 0;
    int b;

    string target;
    target += ch;
    target += ch;

    while (true)
    {
        a = str.find(target, a);
        if (a == -1) break;

        int len = 0;
        for (int i = a; i <= str.length(); i++)
        {
            if (str[i] != ch) {
                b = i;
                break;
            }
        }

        int size = b - a - 1;
        str.erase(a, size);
    }
}

void step1()
{
    removedup('(');
    removedup(')');
}

void step2()
{
    int a = 0;
    int b;

    while (true)
    {
        a = str.find("^^^", a);
        if (a == -1) break;

        int len = str.length();
        if (a + 2 >= len) break;

        for (int i = a; i <= len; i++)
        {
            if (str[i] != '^')
            {
                b = i;
                break;
            }
        }

        int size = b - a - 2;
        str.erase(a, size);
    }
}

void step3()
{
    int a = 0;

    while (true)
    {
        a = str.find("^", a + 1);

        int len = str.length();
        if (a == -1) break;
        if (a + 2 > len) break;

        if (str[a + 2] == '^')
        {
            str[a + 1] = '_';
        }
    }
}

int main()
{
    cin >> str;

    step1();
    step2();
    step3();

    cout << str;

    return 0;
}