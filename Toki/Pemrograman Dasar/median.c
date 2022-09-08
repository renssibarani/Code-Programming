#include <stdio.h>

int main()
{
	int N;
	float i, Ni, a, b;

	scanf("%d", &N);

	for (i = 1.0; i <=N ; ++i)
	{
		scanf("%f", &Ni);
		a+=Ni;
		b=(a*5)/i;
		printf("%.1f\n", b); 
	}
	return 0;
}
