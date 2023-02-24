#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

const int u = 0;
const int d = 1;
const int l = 2;
const int r = 3;

struct Ball {
    int y, x;
    int cnt;

    bool operator==(Ball another) {
        return y == another.y && x == another.x;
    }
};

vector<Ball> wh[11];

bool onSearching = false;

// [블록][현재방향] = [반환방향]
int bounce[6][4] = {
    {0, 0, 0, 0},
    {d, r, u, l},
    {r, u, d, l},
    {l, u, r, d},
    {d, l, r, u},
    {d, u, r, l}
};

int dY[4] = { -1, 1, 0, 0 };
int dX[4] = { 0, 0, -1, 1 };

int mapSize;
int map[102][102];

int ans = -1;

void dfs(Ball now, int dir)
{
    // 기저조건
    while (true) {
        if (map[now.y][now.x] == -1)
        {
            ans = now.cnt;
            onSearching = false;
            map[now.y][now.x] = 0;
            return;
        }
        if (!onSearching)
        {
            onSearching = true;
            map[now.y][now.x] = -1;
        }



        // 재귀
        int nY = now.y + dY[dir];
        int nX = now.x + dX[dir];

        int next = map[nY][nX];

        now.y = nY;
        now.x = nX;

        if (next >= 1 && next <= 5)
        {
            now.cnt++;
            dir = bounce[next][dir];
        }
        if (next >= 6 && next <= 10)
        {
            int ret = -1;

            Ball wormwholl = { nY, nX, 0 };
            Ball another;

            for (int i = 0; i < 2; i++)
            {
                Ball temp = wh[next][i];
                if (!(wormwholl == temp))
                {
                    another = temp;
                }
            }

            now.y = another.y;
            now.x = another.x;
        }
    }

    return;
}

int main()
{
    freopen("input.txt", "r", stdin);

    int t;

    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        cin >> mapSize;

        int maxCnt = 0;

        for (int i = 0; i < 102; i++)
            for (int j = 0; j < 102; j++)
                map[i][j] = 5;

        for (int i = 0; i < 11; i++)
            wh[i].clear();

        for (int i = 1; i <= mapSize; i++)
            for (int j = 1; j <= mapSize; j++)
            {
                cin >> map[i][j];

                if (map[i][j] >= 6 && map[i][j] <= 10)
                {
                    wh[map[i][j]].push_back({ i, j, 0 });
                }
            }

        for (int i = 1; i <= mapSize; i++)
        {
            for (int j = 1; j <= mapSize; j++)
            {
                if (map[i][j] != 0)
                    continue;


                for (int k = 0; k < 4; k++)
                {
                    dfs({ i, j, 0 }, k);

                    if (ans > maxCnt)
                    {
                        maxCnt = ans;
                    }
                }
            }
        }

        cout << '#' << tc << ' ' << maxCnt << '\n';
    }

    return 0;
}