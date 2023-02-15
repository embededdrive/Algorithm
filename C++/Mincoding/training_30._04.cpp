#include <iostream>
#include <queue>

using namespace std;

int arr[6][6] = {
    0, 0, 0, 0, 1, 0,
    1, 0, 1, 0, 0, 1,
    1, 0, 0, 1, 0, 0,
    1, 1, 0, 0, 0, 0,
    0, 1, 0, 1, 0, 1,
    0, 0, 1, 1, 0, 0
}, visited[6];

int main()
{
    queue<int> q;
    int k;

    cin >> k;

    visited[k] = 1;
    q.push(k);
    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        cout << now << '\n';

        for (int to = 0; to < 6; to++)
        {
            if (!arr[now][to]) continue;
            if (visited[to]) continue;
            visited[to] = 1;
            q.push(to);
        }
    }

    return 0;
}