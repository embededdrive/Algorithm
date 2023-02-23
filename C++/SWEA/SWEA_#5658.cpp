#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool cmp(int left, int right)
{
    return left > right;
}

int hexToInt(string part)
{
    int partLen = part.length();

    int num;

    if (part[0] >= 'A' && part[0] <= 'Z')
        num = part[0] - 55;
    else if (part[0] >= '0' && part[0] <= '9')
        num = part[0] - '0';

    for (int i = 1; i < partLen; i++)
    {
        num *= 16;
        int plus;
        if (part[i] >= 'A' && part[i] <= 'Z')
            plus = part[i] - 55;
        else if (part[i] >= '0' && part[i] <= '9')
            plus = part[i] - '0';

        num += plus;
    }
    
    return num;
}

int main()
{
    freopen("input.txt", "r", stdin);

    int tc;

    cin >> tc;

    for (int testNo = 1; testNo <= tc; testNo++)
    {
        int n, k;
        string str;
        vector<int> v;
        unordered_map<string, int> um;

        cin >> n >> k;
        cin >> str;

        str += str;

        int len = n / 4;

        for (int i = 0; i < n; i++)
        {
            string sub = str.substr(i, len);


            int num = hexToInt(sub);

            if (um.find(sub) == um.end())
            {
                um[sub] = 1;
                v.push_back(num);
            }
            else
                continue;
        }

        sort(v.begin(), v.end(), cmp);

        cout << "#" << testNo << ' ' << v[k - 1] << endl;
    }

    return 0;
}

/*

숫자 n
크기 k

슬라이딩 윈도우

start 
end


16진수 -> 해쉬로 있는지 검색
없으면 10진수 변환 -> 벡터에 넣기

k번째 수를 출력


*/