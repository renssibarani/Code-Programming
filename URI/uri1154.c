#include <stdio.h>

int main()
{
	int i, l=0;
	float k, j=0.0;

	while(1) {
	    scanf("%d", &i);
	    if (i > 0)
	    {
	    	l+=i;
	    	j+=1.0;
	    }else{
	    k=l/j;
	    printf("%.2f\n", k);
	    return 0;
	    }
	}
	return 0;
}
