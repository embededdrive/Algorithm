#include <iostream>

using namespace std;

string str;
int n, adj[10][10];

void dfs(int now)
{
    cout << str[now];
    for (int to = 0; to < n; to++)
    {
        if (adj[now][to] == 0) continue;
        
        dfs(to);
    }
}

int main()
{
    cin >> str;

    n = str.length();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adj[i][j];
        }
    }

    dfs(0);

    return 0;
}