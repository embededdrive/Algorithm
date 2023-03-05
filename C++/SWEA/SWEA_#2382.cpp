#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

struct Insect
{
    int y, x;
    int size;
    int origSize;
    int dir;
    int idx;
    bool isDead;
};

bool cmp(Insect left, Insect right)
{
    return left.size > right.size;
}

int n, m, k;

int zone[1000][1000];
Insect insects[1001];

int dY[4] = { -1, 1, 0, 0 };
int dX[4] = { 0, 0, -1, 1 };

void move()
{
    memset(zone, 0, sizeof(int) * 1000 * 1000);

    for (int i = 1; i <= k; i++)
    {
        Insect now = insects[i];
        if (now.isDead)
            continue;

        int nY = now.y + dY[now.dir];
        int nX = now.x + dX[now.dir];
        insects[i].y = nY;
        insects[i].x = nX;

        insects[i].origSize = insects[i].size;

        if (zone[nY][nX] == 0)
        {
            zone[nY][nX] = i;
            if (nY == 0 || nX == 0 || nY == n - 1 || nX == n - 1)
            {
                insects[i].size /= 2;

                if (insects[i].dir % 2 == 0)
                    insects[i].dir++;
                else
                    insects[i].dir--;

                if (insects[i].size == 0)
                {
                    insects[i].isDead = true;
                    zone[nY][nX] = 0;
                    continue;
                }
            }
        }
        else {
            int j = zone[nY][nX];

            if (insects[i].origSize > insects[j].origSize)
            {
                insects[i].size += insects[j].size;
                insects[j].isDead = true;
                zone[nY][nX] = i;
            }
            else {
                insects[j].size += insects[i].size;
                insects[i].isDead = true;
            }

        }
    }
}

void input()
{
    cin >> n >> m >> k;

    for (int i = 1; i <= k; i++)
    {
        int y, x, num, d;

        cin >> y >> x >> num >> d;

        zone[y][x] = i;
        insects[i] = {y, x, num, num, d - 1, i, false };
    }

    return;
}

void printZone()
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << zone[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int t;

    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        input();
        
        for (int i = 0; i < m; i++)
            move();

        int ans = 0;
        for (int i = 1; i <= k; i++)
            if (!insects[i].isDead)
                ans += insects[i].size;

        cout << '#' << tc << ' ' << ans << '\n';
    }

    return 0;
}