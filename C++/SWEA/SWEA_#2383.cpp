#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person
{
    int y, x;
    // 0: 계단으로 이동중, 1: 입구 도착, 2: 계단 사용중, 3: 도착
    int state;
    int usingStair;
    int moveTarget;
    int moveTime;
    int waitTime;
    int downTime;
};

bool cmp(Person left, Person right)
{
    return left.state > right.state;
}

struct Stair
{
    int y, x;
    int len;
    int waiting;
    int going;
};

vector<Person> persons;
vector<Stair> stairs;

int n, personCnt;

int getDist(Person p, Stair s)
{
    return abs(p.y - s.y) + abs(p.x - s.x);
}

int simulate()
{
    for (int i = 0; i < personCnt; i++)
    {
        int us = persons[i].usingStair;
        persons[i].moveTarget = getDist(persons[i], stairs[us]);
    }

    int remains = personCnt;
    int needTime = 0;

    while (remains > 0)
    {
        sort(persons.begin(), persons.end(), cmp);

        for (int i = 0; i < personCnt; i++)
        {
            Person now = persons[i];
            int us = now.usingStair;

            if (now.state == 0)
            {
                if (now.moveTime < now.moveTarget)
                    persons[i].moveTime++;

                if (now.moveTime == now.moveTarget)
                {
                    if (stairs[us].waiting < 3)
                    {
                        stairs[us].waiting++;
                        persons[i].state = 1;
                    }
                    else {
                        persons[i].waitTime++;
                    }
                }
            }
            else if (now.state == 1)
            {
                persons[i].waitTime++;
                if (stairs[us].going < 3)
                {
                    stairs[us].waiting--;
                    stairs[us].going++;
                    persons[i].state = 2;
                    persons[i].downTime++;
                }
            }
            else if (now.state == 2)
            {
                persons[i].downTime++;
                if (stairs[us].len == now.downTime)
                {
                    stairs[us].going--;
                    persons[i].state = 3;
                    remains--;
                    int sum = now.moveTime + now.waitTime + now.downTime;
                    if (sum > needTime)
                        needTime = sum;
                }
            }
            else if (now.state == 3)
                continue;
        }
    }

    return needTime;
}

int path[10];
int minTime;

void dfs(int lev)
{
    if (lev == personCnt)
    {
        for (int i = 0; i < personCnt; i++)
        {
            persons[i].usingStair = path[i];
            persons[i].state = 0;
            persons[i].moveTime = 0;
            persons[i].waitTime = 0;
            persons[i].downTime = 0;
        }

        int ret = simulate();

        if (ret < minTime)
            minTime = ret;

        return;
    }

    for (int i = 0; i < 2; i++)
    {
        path[lev] = i;
        dfs(lev + 1);
        path[lev] = 0;
    }
}

void input()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int num;

            cin >> num;

            if (num == 1)
                persons.push_back({ i, j, personCnt++, 0, 0, 0, 0, 0 });
            else if (num > 1)
                stairs.push_back({ i, j, num, 0, 0 });
        }
    }
}

int main()
{
    // freopen_s(new FILE*, "input.txt", "r", stdin);

    int t;

    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        persons.clear();
        stairs.clear();
        minTime = 21e8;
        personCnt = 0;
        input();

        dfs(0);

        cout << '#' << tc << ' ' << minTime << '\n';
    }

    return 0;
}