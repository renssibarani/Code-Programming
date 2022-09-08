#include <stdio.h>

int main()
{
	int i =10;
	int j;

	scanf("%d", &i);

	for (i; i >= 1 ; i--)
	{
		int b=1;
		for (j; j >= i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
printf("\n");
	return 0;
}
