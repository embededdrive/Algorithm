#include <iostream>

using namespace std;

int main()
{
    int k, rotation, arr[4] = {12, 3, 6, 9};

    cin >> k;

    rotation = k / 90;

    for (int i = 0; i < rotation; i++)
    {
        int temp = arr[3];
        for (int i = 3; i >= 1; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }

    cout << arr[0] << ' ' << arr[3] << ' ' << arr[1] << ' ' << arr[2];

    return 0;
}