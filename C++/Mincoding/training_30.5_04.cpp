#include <iostream>

using namespace std;

int main()
{
    string nums[3];
    int longest = 0, largenum, idx = 0;
    int longests[3] = { 0 };

    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < 3; i++)
    {
        int len = nums[i].length();
        if (len > longest)
        {
            longest = len;
            for (int j = 0; j < 3; j++)
            {
                longests[j] = 0;
            }
            longests[i] = 1;
        }
        else if (len == longest)
            longests[i] = 1;
    }

    while (longests[0] + longests[1] + longests[2] > 1)
    {
        for (int i = 0; i < 3; i++)
        {
            if (nums[i][idx] == '0')
            {
                longests[i] = 0;
            }
        }
        idx++;
    }

    for (int i = 0; i < 3; i++)
    {
        if (longests[i] == 1)
        {
            cout << nums[i];
        }
    }

    return 0;
}