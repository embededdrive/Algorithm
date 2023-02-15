#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ID[20] = {"qlqlaqkq"}, PASSWORD[20] = {"tkaruqtkf"}, IDinput[20], PASSWORDinput[20];

    cin >> IDinput >> PASSWORDinput;

    if (strcmp(ID, IDinput) == 0 && strcmp(PASSWORD, PASSWORDinput) == 0)
    {
        cout << "LOGIN";
    }
    else {
        cout << "INVALID";
    }

    return 0;
}