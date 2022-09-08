#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, i, j, l;
	int *arr;
	int *ar;

	cin >> N;
	arr = (int*) malloc (N * sizeof(int));
	ar = (int*) malloc (N * sizeof(int));
	for (i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	for (i = 0; i < N; ++i)
	{
		if (arr[i] == arr)
		{
			/* code */
		}
		for (j = 0; j < N; ++j)
		{
			if (arr[i] == arr[j])
			{
				l++;
			}
		}
	}
	return 0;
}
