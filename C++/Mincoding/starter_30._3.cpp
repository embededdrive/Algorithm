#include <iostream>
#include <queue>

using namespace std;

int arr[6][6] = {
    0, 1, 0, 0, 1, 0,
    0, 0, 1, 0, 0, 1,
    0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0
};

queue<int> q;

int main()
{
    int k;

    cin >> k;

    q.push(k);
    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        cout << now << ' ';

        for (int to = 0; to < 6; to++)
        {
            if (!arr[now][to]) continue;

            q.push(to);
        }
    }

    return 0;
}