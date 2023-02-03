#include <iostream>

using namespace std;

struct Value
{
    int size;
    int y;
    int x;
};

int arr[10][10];

int main()
{
    int h, w;
    Value first, second, third;

    first.size = 0;
    second.size = 0;
    third.size = 0;

    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (arr[i][j] > first.size)
            {
                if (first.size != 0)
                {
                    if (second.size != 0)
                    {
                        third.size = second.size;
                        third.y = second.y;
                        third.x = second.x;
                    }
                    second.size = first.size;
                    second.y = first.y;
                    second.x = first.x;
                }
                first.size = arr[i][j];
                first.y = i;
                first.x = j;
                continue;
            } else if (arr[i][j] > second.size)
            {
                if (second.size != 0)
                {
                    third.size = second.size;
                    third.y = second.y;
                    third.x = second.x;
                }
                second.size = arr[i][j];
                second.y = i;
                second.x = j;
                continue;
            }
            else if (arr[i][j] > second.size)
            {
                third.size = arr[i][j];
                third.y = i;
                third.x = j;
                continue;
            }
        }
    }

    cout << first.size << '(' << first.y << ',' << first.x << ")\n";
    cout << second.size << '(' << second.y << ',' << second.x << ")\n";
    cout << third.size << '(' << third.y << ',' << third.x << ")\n";

    return 0;
}