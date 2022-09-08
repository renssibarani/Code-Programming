#include <stdio.h>
#include <math.h>

int main()
{
	int N, M;
	int a;

	scanf("%d %d", &N, &M);

	if (N % M == 0)
	{
		a = N/ M;
		printf("%d\n", a);
	}else{
		printf("%d\n", a+1);
	}
	return 0;
}
