#include <iostream>

using namespace std;

int adj[10][10], n;

void dfs(int now)
{
    cout << now << ' ';

    for (int to = 0; to < n; to++)
    {
        if (adj[now][to] == 0) continue;

        dfs(to);
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

    dfs(0);

    return 0;
}