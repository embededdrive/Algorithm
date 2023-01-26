#include <iostream>

using namespace std;

int main()
{
	struct sketchbook
	{
		char image[3][3];
	};

	sketchbook sketch;

	int DAT[255] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> sketch.image[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			DAT[sketch.image[i][j]]++;
		}
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (DAT[i] != 0)
		{
			cout << i;
		}
	}

	return 0;
}