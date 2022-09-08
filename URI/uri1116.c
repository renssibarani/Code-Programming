#include <stdio.h>

int main()
{
	int x, y, i, n;
	float z;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d %d", &x, &y);
		if (y==0)
		{
			printf("divisao impossivel\n");
		}
		else{
			
			printf("%.1f\n", (x*1.0)/(y*1.0));
		}
	}
	return 0;
}
