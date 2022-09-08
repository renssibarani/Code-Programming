#include <stdio.h>

int main()
{
	int N, i, M;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			printf("%d\n", N/i);
		}
	}
	return 0;
}
