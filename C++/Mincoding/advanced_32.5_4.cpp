#include <iostream>

using namespace std;

int main()
{
    int checkCnt;

    cin >> checkCnt;

    int left = 1;
    int right = 50;

    for (int i = 0; i < checkCnt; i++)
    {
        int num;
        string cmd;

        cin >> num >> cmd;

        if (cmd == "DOWN")
        {
            right = num - 1;
        }
        else if (cmd == "UP")
        {
            left = num + 1;
        }
    }

    if (left < right)
        cout << left << " ~ " << right;
    else if (left == right)
        cout << left;
    else
        cout << "ERROR";

    return 0;
}