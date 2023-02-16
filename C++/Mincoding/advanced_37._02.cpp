#include <iostream>
#include <queue>

using namespace std;

struct Axis {
    int y, x;
};

int grill[1000][1000];

int main()
{
    int sY, sX;
    int n, m;
    int dY[4] = {-1, 1, 0, 0};
    int dX[4] = {0, 0, -1, 1};

    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grill[i][j];
        }
    }

    cin >> sY >> sX;

    queue<Axis> q;

    q.push({ sY, sX });

    int cnt = -1;

    while (!q.empty())
    {
        cnt++;

        int size = q.size();

        for (int i = 0; i < size; i++)
        {
            Axis now = q.front();
            q.pop();

            grill[now.y][now.x] = cnt;

            for (int i = 0; i < 4; i++)
            {
                int posY = now.y + dY[i];
                int posX = now.x + dX[i];

                if (posY < 0 || posX < 0 || posY >= n || posX >= n)
                    continue;

                if (grill[posY][posX] > 0)
                    continue;

                q.push({ posY, posX });
            }
        }
    }

    cout << cnt;

    return 0;
}