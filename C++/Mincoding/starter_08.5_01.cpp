#include <iostream>

using namespace std;

int main()
{
	int arr[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 6; i++)
	{
		string text;

		if (arr[i] < 5)
		{
			text = "불합격";
		}
		else {
			text = "합격";
		}

		cout << i << "번은 " << arr[i] << "점 " << text << endl;
	}

	return 0;
}