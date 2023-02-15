#include <iostream>

using namespace std;

int main()
{
    int arr[6] = { 1, 5, 4, 2, -5, -7 }, n;

    cin >> n;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << arr[n - 1];

    return 0;
}