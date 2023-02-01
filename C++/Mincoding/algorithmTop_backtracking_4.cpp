#include <iostream>

using namespace std;

int n, m;
int path[5];
int used[7];

void run(int lev, int start)
{
    if (lev == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << path[i] << ' ';
        }
        cout << '\n';
        return;
    }

    int st = 1;
    if (m == 2) st = start;

    for (int i = st; i <= 6; i++)
    {
        if (used[i] == 1 && m == 3) continue;

        used[i] = 1;
        path[lev] = i;
        run(lev + 1, i);
        path[lev] = 0;
        used[i] = 0;

    }
}

int main()
{
    cin >> n >> m;

    run(0, 1);

    return 0;
}