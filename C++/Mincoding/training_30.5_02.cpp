#include <iostream>

using namespace std;

int num;
char path[10];

void run(int lev)
{
    if (lev == num)
    {
        cout << path << '\n';
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        if (i == 1)
        {
            path[lev] = 'x';
        }
        else {
            path[lev] = 'o';
        }
        run(lev + 1);
    }
}

int main()
{
    cin >> num;

    run(0);

    return 0;
}