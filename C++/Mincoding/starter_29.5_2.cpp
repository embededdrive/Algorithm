#include <iostream>

using namespace std;

int evid[7] = { -1, 0, 0, 1, 2, 4, 4 };
int timeStamp[7] = { 8, 3, 5, 6, 8, 9, 10 };

void run(int now)
{
	int time = timeStamp[now];
	int next = evid[now];


	if (next == -1)
	{
		cout << now << "번index(출발)\n";
		return;
	}
	run(next);

	cout << now << "번index(" << time << "시)\n";
}

int main()
{
	int n;
	cin >> n;

	run(n);

	return 0;
}