﻿#include <iostream>

using namespace std;

int main()
{
	char arr[4][5][4] = {
		{{" # "},{"# #"},{"###"},{"# #"},{"# #"}},
		{{"###"},{"# #"},{"###"},{"# #"},{"###"}},
		{{"###"},{"# #"},{"#  "},{"# #"},{"###"}},
		{{"## "},{"# #"},{"# #"},{"# #"},{"## "}}
	};
	int ch;

	cin >> ch;

	for (int i = 0; i < 5; i++)
	{
		cout << arr[ch][i] << '\n';
	}

	return 0;
}