#include <iostream>

using namespace std;

int n, cnt;

void run(int lev)
{
    if (n == 1)
    {
        cnt = lev;
        return;
    }

    if (n % 2 == 0)
    {
        n /= 2;
    }
    else {
        n *= 3;
        n++;
    }

    run(lev + 1);
}

int main()
{
    cin >> n;

    run(0);

    cout << cnt;

    return 0;
}