#include <iostream>
#include <cstring>

using namespace std;

char names[5];
int n, path[4];

void run(int lev)
{
    if (lev == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << names[path[i]];
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < strlen(names); i++)
    {

        path[lev] = i;
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    cin >> names >> n;

    run(0);

    return 0;
}