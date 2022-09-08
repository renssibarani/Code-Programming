#include <stdio.h>

int main()
{
	int i, N, M=1;

	scanf("%d", &N);
	if (N > 1 && N < 13)
	{
	for (i = N; i >=1 ; i--)
	{
		M=i*M;
	}
	printf("%d\n", M);
	}
	return 0;
}
