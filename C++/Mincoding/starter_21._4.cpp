#include <iostream>

using namespace std;

int levellimit;

void run(int lev)
{
    cout << lev;

    if (lev == levellimit)
    {
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        run(lev + 1);
    }
}

int main()
{
    cin >> levellimit;

    run(0);

    return 0;
}