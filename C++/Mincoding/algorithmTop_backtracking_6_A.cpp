#include <iostream>

using namespace std;

int rising[100], falling[100], usedrow[13], n, cnt;

void run(int lev)
{
    if (lev == n)
    {
        cnt++;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (usedrow[i] == 1) continue;
        if (rising[lev + i] == 1) continue;
        if (falling[lev - i + n] == 1) continue;

        usedrow[i] = 1;
        rising[lev + i] = 1;
        falling[lev - i + n] = 1;
        run(lev + 1);
        usedrow[i] = 0;
        rising[lev + i] = 0;
        falling[lev - i + n] = 0;

    }
}

int main()
{
    cin >> n;

    run(0);

    cout << cnt;

    return 0;
}