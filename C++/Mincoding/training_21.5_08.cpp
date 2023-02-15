#include <iostream>
#include <cstring>

using namespace std;

char models[5][4] = {
		"___",
		"___",
		"ATK",
		"___",
		"___"
}, commands[4][10] = {
		"UP",
		"DOWN",
		"LEFT",
		"RIGHT"
};

void move(char model, char direction[10])
{
	int dy[4] = { -1, 1, 0, 0 };
	int dx[4] = { 0, 0, -1, 1 };
	int cy, cx;
	bool flag = false;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (models[i][j] == model)
			{
				cy = i;
				cx = j;
				flag = true;
				break;
			}
		}
		if (flag) break;
	}

	for (int i = 0; i < 4; i++)
	{
		if (strcmp(direction, commands[i]) == 0)
		{
			models[cy + dy[i]][cx + dx[i]] = model;
			models[cy][cx] = '_';
		}
	}
}

int main()
{
	for (int i = 0; i < 7; i++)
	{
		char model, direction[10];
		cin >> model >> direction;

		move(model, direction);
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << models[i][j];
		}
		cout << '\n';
	}

	return 0;
}