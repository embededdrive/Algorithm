#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[100], b[100], c[100], temp[100];
    int aLen, bLen, cLen;

    cin >> a >> b >> c;

    aLen = strlen(a);
    bLen = strlen(b);
    cLen = strlen(c);

    if (bLen > aLen && bLen > cLen)
    {
        strcpy(temp, a);
        strcpy(a, b);
        strcpy(b, temp);
    }
    else if (cLen > aLen && cLen > bLen)
    {
        strcpy(temp, a);
        strcpy(a, c);
        strcpy(c, temp);
    }

    cout << a << '\n' << b << '\n' << c;

    return 0;
}