#include <iostream>

using namespace std;

int n, cnt;

void run(int sum)
{
    if (sum == n)
    {
        cnt++;
        return;
    }
    else if (sum > n) return;

    for (int i = 1; i <= 3; i++)
    {
        run(sum + i);
    }
}

int main()
{
    cin >> n;

    run(0);

    cout << cnt;

    return 0;
}