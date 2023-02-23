#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ThreeMonth {
	int startMonth;
	int costSum;
};

bool cmp(ThreeMonth left, ThreeMonth right) {
	return left.costSum > right.costSum;
}

// 1일 / 1개월 / 3개월 / 1년
int prices[4];
int scheduled[12];

int main()
{
	freopen("input.txt", "r", stdin);

	int tc;

	cin >> tc;

	for (int testNo = 1; testNo <= tc; testNo++)
	{
		int currentCost[12];
		int total = 0;
		int chained[12] = { 0 };

		for (int i = 0; i < 4; i++)
			cin >> prices[i];

		for (int i = 0; i < 12; i++)
			cin >> scheduled[i];

		// 1일 요금으로 전부 계산
		for (int i = 0; i < 12; i++)
		{
			currentCost[i] = prices[0] * scheduled[i];
			total += currentCost[i];
		}

		// 1개월 요금 최적화
		for (int i = 0; i < 12; i++)
		{
			if (currentCost[i] > prices[1])
			{
				total -= currentCost[i];
				currentCost[i] = prices[1];
				total += currentCost[i];
			}
		}

		// 3개월 요금 최적화
		vector<ThreeMonth> temp;

		for (int i = 0; i < 10; i++)
		{
			int sum = currentCost[i] + currentCost[i + 1] + currentCost[i + 2];
			if (sum > prices[2])
			{
				temp.push_back({ i, sum });


			}
		}

		sort(temp.begin(), temp.end(), cmp);

		int size = temp.size();

		for (int i = 0; i < size; i++)
		{
			ThreeMonth now = temp[i];
			bool isChained = false;
			for (int j = 0; j < 3; j++)
			{
				if (chained[now.startMonth + j] == 1)
				{
					isChained = true;
					break;
				}
			}
			if (isChained)
				continue;

			for (int j = 0; j < 3; j++)
				chained[now.startMonth + j] = 1;

			total -= now.costSum;
			total += prices[2];
		}

		if (total > prices[2] * 4)
			total = prices[2] * 4;

		// 1년 요금 최적화
		if (total > prices[3])
			total = prices[3];

		cout << '#' << testNo << ' ' << total << '\n';
	}

	return 0;
}

/*

월별 요금 배열

1. 개월별 요금을 1일치 요금으로 전부 계산

1일치 * 방문횟수

2. 개월별 요금이 1개월 요금보다 비싸면 전부 1개월 요금으로 교체

3. 3개월치 요금이 3개월 요금보다 비싸면 3개월 요금으로 교체

3개월치 요금이 비싼 시작월을 배열에 저장 (시작월, 3개월 요금)
3개월 요금 기준으로 정렬
정렬된 시작월 부터 3개월치 요금으로 교체
교체한 월들은 payed 마킹
이후 나오는 3개월치 요금중 payed가 있으면 pass

4. 12개월치 요금이 1년 요금보다 비싸면 1년 요금으로 교체

최종 요금 출력

*/