#include <iostream>

using namespace std;

int adj[7][7] = {
    0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 1, 1,
    0, 1, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 1, 0,
    0, 1, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
}, target;
int cnt, visited[7];

void dfs(int now, int lev)
{
    if (now == target)
    {
        cnt = lev;
    }

    for (int to = 1; to < 7; to++)
    {
        if (adj[now][to] == 0) continue;
        if (visited[to] == 1) continue;
        
        visited[to] = 1;
        dfs(to, lev + 1);
        visited[to] = 0;
    }
}

int main()
{
    int from;

    cin >> from >> target;

    dfs(from, 0);

    cout << cnt;

    return 0;
}