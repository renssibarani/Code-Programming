#include<stdio.h>

int main()
{
	int N, i, j;
	scanf("%d", &j);
	for (i = 0; i < j; ++i)
	{
		scanf("%d", &N);
		if (N == 0) printf("NULL\n");
		if (N < 0){
			if (N % 2 ==0)
			{
				printf("EVEN NEGATIVE\n");
			}else{
				printf("ODD NEGATIVE\n");
			}
		}
		if (N > 0){
			if (N % 2 == 0)
			{
				printf("EVEN POSITIVE\n");
			}else{
				printf("ODD POSITIVE\n");
			}
		}
	}
		return 0;
}
