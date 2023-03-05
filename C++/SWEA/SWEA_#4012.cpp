#include <iostream>

using namespace std;

int n;

int synergy[16][16];

int used[16];
int foodA[8];
int foodB[8];

int calcFlavor()
{
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (used[i])
            continue;

        foodB[idx++] = i;
    }

    int flavorA = 0;
    int flavorB = 0;

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            flavorA += synergy[foodA[i]][foodA[j]];
            flavorB += synergy[foodB[i]][foodB[j]];
        }
    }

    return abs(flavorA - flavorB);
}

int minDif;

void dfs(int lev, int start)
{
    if (lev == n / 2)
    {
        int dif = calcFlavor();
        if (dif < minDif)
        {
            minDif = dif;
        }
        return;
    }

    for (int i = start; i < n; i++)
    {
        if (used[i])
            continue;

        used[i] = 1;
        foodA[lev] = i;
        dfs(lev + 1, i);
        foodA[lev] = 0;
        used[i] = 0;
    }
}

int main()
{
    freopen_s(new FILE*, "input.txt", "r", stdin);

    int t;

    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        minDif = 21e8;

        cin >> n;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> synergy[i][j];


        dfs(0, 0);

        cout << '#' << tc << ' ' << minDif << '\n';
    }

    return 0;
}