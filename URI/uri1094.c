#include <stdio.h>

int main()
{
	int i,t,l,total,n,C=0,R=0,S=0;
	char c;
	double x,y,z;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %c", &l,&c);
		if(c=='S')S+=l;
		else if(c=='R')R+=l;
		else C+=l;
	}
	total=C+S+R;
	x=(C*100.00)/total;
	y=(S*100.00)/total;
	z=(R*100.00)/total;
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", C);
	printf("Total de ratos: %d\n", R);
	printf("Total de sapos: %d\n", S);
	printf("Percentual de coelhos: %0.2lf %%\n", x);
	printf("Percentual de ratos: %0.2lf %%\n", z);
	printf("Percentual de sapos: %0.2lf %%\n", y);
	return 0;
}
