#include<iostream>

using namespace std;

char parent[200];
bool isCycle = false;

char find(char ch)
{
    if (parent[ch] == ch)
        return ch;

    char ret = find(parent[ch]);
    parent[ch] = ret;
    return ret;
}

void Union(char a, char b)
{
    char pa = find(a);
    char pb = find(b);

    if (pa == pb)
    {
        isCycle = true;
        return;
    }

    parent[pb] = parent[pa];
}

int main()
{
    int n;

    for (char ch = 'A'; ch <= 'Z'; ch++)
        parent[ch] = ch;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char a, b;

        cin >> a >> b;

        Union(a, b);
    }

    if (isCycle)
        cout << "발견";
    else
        cout << "미발견";

    return 0;
}