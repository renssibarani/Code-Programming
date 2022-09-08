#include<stdio.h>

int main()
{
	int N[100];
	int i, j;

	while(scanf("%d", &N[i]) != EOF) {
    i++;
	}

	for (j = i-1; j >= 0; --j)
	{
		printf("%d\n", N[j]);
	}

	return 0;
}
