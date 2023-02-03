#include <iostream>

using namespace std;

int tower[5][5], rotated[5][5];
int n, m;
long long scoreMax;
int path[5];

long long  calc()
{
    bool isDup = false;
    int rowsum[5] = { 0 };

    for (int i = 0; i < m; i++)
    {
        int dat[201] = { 0 };

        for (int j = 0; j < n; j++)
        {
            dat[rotated[j][i] + 100]++;
            rowsum[i] += rotated[j][i];
        }

        for (int j = 0; j < 201; j++)
        {
            if (dat[j] > 1) {
                return 0;
            }
        }
    }
    long long  ans = 1;

    for (int i = 0; i < m; i++)
    {
        ans *= rowsum[i];
    }

    return ans;
}

void rotate()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            rotated[i][j] = tower[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < path[i]; j++)
        {
            int temp = rotated[i][m - 1];
            for (int k = m - 1; k >= 1; k--)
            {
                rotated[i][k] = rotated[i][k - 1];
            }
            rotated[i][0] = temp;
        }
    }
}

void run(int floor)
{
    if (floor == n)
    {
        rotate();
        long long ret = calc();
        if (ret > scoreMax)
            scoreMax = ret;

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

    cout << scoreMax;

    return 0;
}