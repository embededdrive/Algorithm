#include <iostream>

using namespace std;

int arr[2][6] = {
	4, 5, 6, 1, 3, 1,
	2, 1, 3, 6, 3, 6
};

void Input(int *a, int *b, int *c)
{
	cin >> *a >> *b >> *c;
}

void Process(int a, int b, int c, int *numa, int *numb, int *numc)
{
	int cnta = 0, cntb = 0, cntc = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] == a)
			{
				cnta++;
			}
			if (arr[i][j] == b)
			{
				cntb++;
			}
			if (arr[i][j] == c)
			{
				cntc++;
			}
		}
	}

	*numa = cnta;
	*numb = cntb;
	*numc = cntc;
}

void Output(int a, int b, int c, int numa, int numb, int numc)
{
	cout << a << '=' << numa << "개" << endl;
	cout << b << '=' << numb << "개" << endl;
	cout << c << '=' << numc << "개";
}

int main()
{
	int a, b, c, numa, numb, numc;

	Input(&a, &b, &c);
	Process(a, b, c, &numa, &numb, &numc);
	Output(a, b, c, numa, numb, numc);

	return 0;
}