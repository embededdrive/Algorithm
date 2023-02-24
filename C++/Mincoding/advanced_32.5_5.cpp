#include <iostream>

using namespace std;

int dist[7] = { 3, 2, 1, 3, 2, 0, 1 };
int path[7] = { 1, 1, -1, 1, -1, 0, -1 };

int record[7];
int index;

int run(int lev, int idx)
{
    if (dist[idx] == 0)
    {
        record[index++] = idx;
        return lev;
    }

    int ret = run(lev + 1, idx + path[idx] * dist[idx]);

    record[index++] = idx;

    return ret;
}

int main()
{
    int index;

    cin >> index;

    int size = run(0, index);

    for (int i = 0; i <= size; i++)
        cout << record[i] << "번\n";

    return 0;
}