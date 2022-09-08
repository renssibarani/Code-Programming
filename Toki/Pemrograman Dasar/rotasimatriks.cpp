#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M, i, j;
	int matriks[105][105];

	cin >> N >> M;

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < M; ++j)
		{
			cin >> matriks[i][j];
		}
	}


	for (i = 0; i < M; ++i)
	{
		for (j = N -1; j >= 0; --j)
		{
			if (j == 0)
			{
				cout << matriks[j][i];
			}else{
				cout << matriks[j][i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
