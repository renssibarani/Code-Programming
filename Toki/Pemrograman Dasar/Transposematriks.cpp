#include <iostream>

using namespace std;

int main()
{
	int A[100][100];
	int AT[100][100];
	int i, j;

	for (i = 0; i < 3; ++i)
	{
		for (j= 0; j < 3; ++j)
		{
			cin >> A[i][j];
		}
	}

	for (i = 0; i < 3; ++i)
	{
		for (j= 0; j < 3; ++j)
		{
			AT[j][i]=A[i][j];
		}
	}

	for (i = 0; i < 3; ++i)
	{
		for (j= 0; j < 3; ++j)
		{
			cout<< AT[i][j];
			if (j < 2)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
