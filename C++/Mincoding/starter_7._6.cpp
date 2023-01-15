#include <iostream>

using namespace std;

int main()
{
	int num;

	for (int i = 0; i < 4; i++)
	{
		cin >> num;

		if (num < 20)
		{
			cout << "더 큰수를 입력하세요";
		}
		else if (num > 20) {
			cout << "더 작은수를 입력하세요";
		}
		else {
			cout << "정답입니다";
		}
		cout << endl;
	}

	return 0;
}