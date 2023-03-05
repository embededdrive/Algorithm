#include <iostream>
#include <queue>

using namespace std;

struct Customer
{
    int visitTime;
    int customerNo;
    int recNo;
    int repNo;
};

Customer customers[1001];

queue<int> waitForRep;
queue<int> waitForRec;

int recCnt, repCnt, customerCnt, recTarget, repTarget;
int recStatus[10], recTime[10], recCustomer[10], repStatus[10], repTime[10], repCustomer[10];

int solve()
{
    int ans = 0;
    int timer = 0;
    int enterIdx = 1;
    int remains = customerCnt;

    while (remains > 0)
    {
        // 수리 절차 진행
        for (int i = 1; i <= repCnt; i++)
        {
            int idx = repCustomer[i];
            if (idx != 0)
            {
                repStatus[i]++;

                if (repStatus[i] == repTime[i])
                {
                    repStatus[i] = 0;
                    repCustomer[i] = 0;
                    remains--;
                }
            }
        }

        // 접수 절차 진행
        for (int i = 1; i <= recCnt; i++)
        {
            int idx = recCustomer[i];
            if (idx != 0)
            {
                recStatus[i]++;

                if (recStatus[i] == recTime[i])
                {
                    waitForRep.push(idx);

                    recStatus[i] = 0;
                    recCustomer[i] = 0;
                }
            }
        }

        // 수리 대기열
        for (int i = 1; i <= repCnt; i++)
        {
            if (repCustomer[i] != 0)
                continue;

            if (waitForRep.empty())
                break;

            int idx = waitForRep.front();
            waitForRep.pop();

            repCustomer[i] = idx;
            customers[idx].repNo = i;
        }

        // 방문
        for (int i = enterIdx; i <= customerCnt; i++)
        {
            enterIdx = i;
            if (customers[i].visitTime == timer)
            {
                waitForRec.push(i);
            }
            else
                break;
        }

        //접수 대기열
        for (int i = 1; i <= recCnt; i++)
        {
            if (recCustomer[i] != 0)
                continue;

            if (waitForRec.empty())
                break;

            int idx = waitForRec.front();
            waitForRec.pop();

            recCustomer[i] = idx;
            customers[idx].recNo = i;
        }

        timer++;
    }

    for (int i = 1; i <= customerCnt; i++)
    {
        Customer now = customers[i];
        if (now.recNo == recTarget && now.repNo == repTarget)
        {
            ans += now.customerNo;
        }
    }

    return ans;
}

void input()
{
    cin >> recCnt >> repCnt >> customerCnt >> recTarget >> repTarget;

    for (int i = 1; i <= recCnt; i++)
    {
        cin >> recTime[i];
        recStatus[i] = 0;
    }

    for (int i = 1; i <= repCnt; i++)
    {
        cin >> repTime[i];
        repStatus[i] = 0;
    }

    for (int i = 1; i <= customerCnt; i++)
    {
        int num;
        cin >> num;

        customers[i] = { num, i, 0, 0 };
    }
}

int main()
{
    freopen_s(new FILE*, "input.txt", "r", stdin);

    int t;

    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        input();

        int ret = solve();

        if (ret == 0)
            ret = -1;

        cout << '#' << tc << ' ' << ret << '\n';
    }

    return 0;
}