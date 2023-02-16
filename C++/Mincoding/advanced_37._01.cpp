#include <iostream>
#include <queue>

using namespace std;

struct Axis {
    int y, x;
};

int n;
int aY, aX, bY, bX;

int defected[101][101];

void bfs(int aY, int aX, int bY, int bX)
{
    queue<Axis> q;

    int dY[4] = { -1, 1, 0, 0 };
    int dX[4] = { 0, 0, -1, 1 };

    q.push({ aY, aX });
    q.push({ bY, bX });

    int cnt = 0;
    while (!q.empty())
    {
        cnt++;
        if (cnt > 9) cnt = 9;

        int size = q.size();

        for (int i = 0; i < size; i++)
        {
            Axis curAxis = q.front();
            q.pop();

            defected[curAxis.y][curAxis.x] = cnt;

            for (int i = 0; i < 4; i++)
            {
                int posY = curAxis.y + dY[i];
                int posX = curAxis.x + dX[i];

                if (posY < 0 || posX < 0 || posY >= n || posX >= n)
                    continue;

                if (defected[posY][posX] > 0) continue;

                q.push({ posY, posX });
            }
        }
    }
}

int main()
{
    cin >> n;

    cin >> aY >> aX >> bY >> bX;

    bfs(aY, aX, bY, bX);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << defected[i][j];
        }
        cout << '\n';
    }

    return 0;
}