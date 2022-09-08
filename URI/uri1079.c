#include <stdio.h>

int main()
{
	int i,j;
	float x,y,z;
	scanf("%d", &j);
	for (i = 0; i <j ; i++)
	{
		scanf("%f %f %f", &x,&y,&z);
		printf("%.1f\n", ((x*2)+(y*3)+(z*5))/10.0);
	}
	return 0;
}