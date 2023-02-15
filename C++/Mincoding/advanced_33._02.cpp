#include<iostream>

using namespace std;

char parent[200];

int total = 4;

void init()
{
    for (char ch = 'A'; ch <= 'Z'; ch++)
        parent[ch] = ch;

    parent['B'] = 'A';
    parent['C'] = 'A';


    parent['E'] = 'D';
    parent['F'] = 'D';

    parent['J'] = 'I';

    parent['G'] = 'H';
}

char Find(char ch)
{
    if (parent[ch] == ch)
    {
        return ch;
    }

    char ret = Find(parent[ch]);
    parent[ch] = ret;
    return ret;
}

void Union(char a, char b)
{
    char pa = Find(a);
    char pb = Find(b);

    if (pa != pb) total--;

    parent[pb] = parent[pa];
}

int main()
{
    init();

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char a, b;

        cin >> a >> b;

        Union(a, b);
    }

    cout << total << "개";

    return 0;
}