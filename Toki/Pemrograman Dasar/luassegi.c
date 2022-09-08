#include <stdio.h>

int main()
{
	int a, b;
	float sum;

	scanf("%d %d", &a, &b);

	sum = (a*b)/2.0;
	printf("%.2f\n", sum);
	return 0;
}
