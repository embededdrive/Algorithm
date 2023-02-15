#include<iostream>

using namespace std;

int map[200][200];
char parent[200];
int n;
bool isCycle = false;

void init()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }
    for (char ch = 'A'; ch <= 'Z'; ch++)
        parent[ch] = ch;
}

char find(char now)
{
    if (now == parent[now]) return now;

    char ret = find(parent[now]);
    parent[now] = ret;
    return ret;
}

void Union(char a, char b)
{
    char pa = find(a);
    char pb = find(b);

    if (pa == pb) {
        isCycle = true;
        return;
    }

    parent[pb] = parent[pa];
}

int main()
{
    init();
    
    for (int child = 0; child < n; child++)
    {
        for (int par = 0; par < n; par++)
        {
            if (map[child][par] == 1)
            {
                map[par][child] = 0;
                Union(par + 'A', child + 'A');
            }
        }
    }

    if (isCycle)
    {
        cout << "cycle 발견";
    }
    else {
        cout << "미발견";
    }

    return 0;
}