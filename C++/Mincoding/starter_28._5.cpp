#include <iostream>

using namespace std;

int n, adj[10][10], path[3];

void dfs(int now, int lev)
{
    if (lev == 2)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << path[i] << ' ';
        }
        cout << '\n';
    }

    for (int to = 0; to < n; to++)
    {
        if (adj[now][to] == 0) continue;
        

        path[lev + 1] = to;
        dfs(to, lev + 1);
        path[lev + 1] = 0;
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adj[i][j];
        }
    }

    path[0] = 0;
    dfs(0, 0);

    return 0;
}