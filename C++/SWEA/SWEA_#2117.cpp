#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

struct Coord {
    int y, x;
};

int map[20][20];
int visited[20][20];
int n, m;

int dY[4] = { -1, 1, 0, 0 };
int dX[4] = { 0, 0, -1, 1 };

bool serviceAvailable(int h, int k)
{
    return h * m >= k * k + (k - 1) * (k - 1);
}

int bfs(int y, int x)
{
    int maxProvide = 0;

    queue<Coord> q;

    int range = 0;
    int provided = 0;

    q.push({ y, x });
    visited[y][x] = 1;
    
    while (!q.empty())
    {
        int size = q.size();
        range++;

        for (int i = 0; i < size; i++)
        {
            Coord now = q.front();
            q.pop();
            
            int cY = now.y;
            int cX = now.x;

            if (map[cY][cX] == 1)
                provided++;

            for (int j = 0; j < 4; j++)
            {
                int nY = cY + dY[j];
                int nX = cX + dX[j];

                if (nY < 0 || nX < 0 || nY >= n || nX >= n)
                    continue;

                if (visited[nY][nX])
                    continue;

                visited[nY][nX] = 1;

                q.push({ nY, nX });
            }
        }

        bool available = serviceAvailable(provided, range);
        if (available && provided > maxProvide)
        {
            maxProvide = provided;
        }
    }

    return maxProvide;
}

int main()
{
    // freopen("input.txt", "r", stdin);

    int tc;

    cin >> tc;

    for (int testNo = 1; testNo <= tc; testNo++)
    {
        int maxCnt = 0;

        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> map[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                memset(visited, 0, 20 * 20 * 4);


                int cnt = bfs(i, j);

                if (cnt > maxCnt)
                    maxCnt = cnt;
            }
        }

        cout << '#' << testNo << ' ' << maxCnt << '\n';
    }

    return 0;
}