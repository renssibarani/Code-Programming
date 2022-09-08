#include <stdio.h>

int main()
{
	float a, b, c;
	
	scanf("%f\n", &a);
	scanf("%f", &b);
	
	c = ((a*3.5) + (b*7.5))/11;
	
	printf("MEDIA = %.5f",c);
	
	return 0;
}
