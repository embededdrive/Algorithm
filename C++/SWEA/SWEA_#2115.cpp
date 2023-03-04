#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Income
{
    int y, x;
    int profit;
};

vector<Income> v;

bool cmp(Income left, Income right)
{
    return left.profit > right.profit;
}

int n, m, c;
int honey[10][10];

int profit;
int cY, cX;

char path[5];

void dfs(int lev)
{
    if (lev >= m)
    {
        int sum = 0;
        int value = 0;

        for (int i = 0; i < m; i++)
        {
            int include = path[i] - '0';
            int cHoney = honey[cY][cX + i];

            sum += include * cHoney;
            value += include * cHoney * cHoney;
        }

        if (sum <= c && profit < value)
        {
            profit = value;
        }

        return;
    }

    for (int i = 0; i < 2; i++)
    {
        path[lev] = '0' + i;
        dfs(lev + 1);
        path[lev] = 0;
    }

}

void maximumHoney(int y, int x)
{
    profit = 0;

    cY = y;
    cX = x;

    dfs(0);

    v.push_back({ y, x, profit });
}

void input()
{
    cin >> n >> m >> c;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> honey[i][j];
}

int main()
{
    // freopen_s(new FILE*, "input.txt", "r", stdin);

    int t;

    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        v.clear();

        input();

        for (int i = 0; i < n; i++)
            for (int j = 0; j <= n - m; j++)
                maximumHoney(i, j);

        sort(v.begin(), v.end(), cmp);


        Income max = v[0];
        int ans = max.profit;

        for (int i = 1; i < v.size(); i++)
        {
            Income next = v[i];

            if (max.y == next.y)
            {
                int from = max.x;
                int to = max.x + m - 1;

                if (next.x >= from && next.x <= to)
                    continue;

                if (next.x + m - 1 >= from && next.x + m - 1 <= to)
                    continue;
            }

            ans += next.profit;
            break;
        }

        cout << '#' << tc << ' ' << ans << '\n';
    }

    return 0;
}