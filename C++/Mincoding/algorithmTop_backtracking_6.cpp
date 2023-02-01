#include <iostream>

using namespace std;

int map[14][14], n, cnt;

void mark(int y, int x)
{
    int posY = y;
    int posX = x;
    map[posY][posX] = 1;
    while (posY >= 0 && posY < n && posX >= 0 && posX < n) map[posY++][posX] = 1;
    posY = y, posX = x;
    while (posY >= 0 && posY < n && posX >= 0 && posX < n) map[posY++][posX++] = 1;
    posY = y, posX = x;
    while (posY >= 0 && posY < n && posX >= 0 && posX < n) map[posY][posX++] = 1;
    posY = y, posX = x;
    while (posY >= 0 && posY < n && posX >= 0 && posX < n) map[posY--][posX++] = 1;
    posY = y, posX = x;
    while (posY >= 0 && posY < n && posX >= 0 && posX < n) map[posY--][posX] = 1;
    posY = y, posX = x;
    while (posY >= 0 && posY < n && posX >= 0 && posX < n) map[posY--][posX--] = 1;
    posY = y, posX = x;
    while (posY >= 0 && posY < n && posX >= 0 && posX < n) map[posY][posX--] = 1;
    posY = y, posX = x;
    while (posY >= 0 && posY < n && posX >= 0 && posX < n) map[posY++][posX--] = 1;
}

void run(int lev)
{
    if (lev == n)
    {
        cnt++;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (map[lev][i] == 1) continue;
        int temp[14][14] = { 0 };
        for (int i = 0; i < 14; i++)
        {
            for (int j = 0; j < 14; j++)
            {
                temp[i][j] = map[i][j];
            }
        }

        mark(lev, i);
        run(lev + 1);
        for (int i = 0; i < 14; i++)
        {
            for (int j = 0; j < 14; j++)
            {
                map[i][j] = temp[i][j];
            }
        }
    }
}

int main()
{
    cin >> n;

    run(0);

    cout << cnt;

    return 0;
}