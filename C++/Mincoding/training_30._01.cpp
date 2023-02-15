#include <iostream>

using namespace std;

int arr[6][6] = {
    0, 0, 1, 1, 0, 1,
    0, 0, 0, 1, 1, 1,
    0, 0, 0, 0, 1, 1,
    0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0
};
int visited[6];

void dfs(int now)
{
    cout << now << ' ';

    for (int to = 0; to < 6; to++)
    {
        if (!arr[now][to]) continue;
        if (visited[to]) continue;
        visited[to] = 1;
        dfs(to);
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