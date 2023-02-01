#include <iostream>

using namespace std;

int tower[5][5];
int turned[5][5];
int n, m;
int path[5];

int davinci()
{
    int sum[5];

    for (int i = 0; i < m; i++)
    {
        int dat[201] = { 0 };
        for (int j = 0; j < n; j++)
        {
            dat[turned[j][i]]++;
            if (dat[turned[j][i]] > 1)
            {
                return 0;
            }
        }
    }
}

void turn()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            turned[i][j] = tower[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < path[i]; j++)
        {
            int temp = turned[i][m - 1];
            for (int k = m - 2; k >= 0; k--)
            {
                turned[i][k + 1] = turned[i][k];
            }
            turned[i][0] = temp;
        }
    }
}

void run(int floor)
{
    if (floor == n)
    {
        turn();
        return;
    }

    for (int rotatecnt = 0; rotatecnt < m; rotatecnt++)
    {
        path[floor] = rotatecnt;
        run(floor + 1);
        path[floor] = 0;
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tower[i][j];
        }
    }

    run(0);

    return 0;
}