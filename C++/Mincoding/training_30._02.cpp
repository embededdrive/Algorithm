#include <iostream>

using namespace std;

int arr[6][6] = {
    0, 0, 1, 0, 2, 0,
    5, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 7,
    2, 0, 0, 0, 8, 0,
    0, 0, 9, 0, 0, 0,
    4, 0, 0, 7, 0, 0
}, visited[6], accum;

void dfs(int now)
{
    cout << now << ' ' << accum << '\n';

    for (int to = 0; to < 6; to++)
    {
        if (arr[now][to] == 0) continue;
        if (visited[to]) continue;

        visited[to] = 1;
        accum += arr[now][to];
        dfs(to);
        visited[to] = 0;
    }
}

int main()
{
    int k;

    cin >> k;

    visited[k] = 1;
    dfs(k);

    return 0;
}